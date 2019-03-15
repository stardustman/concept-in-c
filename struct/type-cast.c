#include <stdio.h>
typedef struct father{
     int name;
	 int age
} Father;
typedef struct son{
	Father father;
    int gender
} Son;
int main()
{
   //printf("%d",sizeof(void *));
   Father father;
   father.name = 1;
   father.age = 46;
   Son son;
   son.father = father;
   son.gender = 1;
   Father * fp;
   fp = &father;
   Son * sp;
   sp = &son;
   //printf("%d",((Father)son).age); wrong
   printf("%d\n",((Father*)sp)->age);
   printf("%d",sp->father.age);

   return 0;
}

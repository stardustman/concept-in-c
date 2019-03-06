#include<stdio.h>

int main(void)
{
    char *p1 = "Himanshu";
    char *p2 = "Arora";
    char *p3 = "India";

    char *arr[3];

    arr[0] = p1;
    arr[1] = p2;
    arr[2] = p3;

    int a[10];
    int i = 0;
    for(i=0;i<10;i++){
        a[i] = i;
    }
    int ** pointer;
    pointer = a;
    int aint[10];

   printf("\n p1 = [%s] \n",p1);
   printf("\n p2 = [%s] \n",p2);
   printf("\n p3 = [%s] \n",p3);

   printf("\n arr[0] = [%s] \n",arr[0]);
   printf("\n arr[1] = [%s] \n",arr[1]);
   printf("\n arr[2] = [%s] \n",arr[2]);

   for(i = 0;i<10;i++){
       printf("%d\n",pointer[i]);

   }
   
   //  array address
   printf("%d\n",&aint);
   printf("%d\n",aint);
   printf("%d\n",&aint[0]);

   return 0;
}

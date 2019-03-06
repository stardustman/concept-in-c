#include<stdio.h>

int main(void)
{
    char **ptr = NULL;

    char **ptrArray = NULL;

    char *p = NULL;

    char c = 'd';

    char arr[10];
    arr[0] = 'd';

    p = &c;
    ptr = &p;
    ptrArray = arr;


    printf("\n c = [%c]\n",c);
    printf("\n *p = [%c]\n",*p);
    printf("\n **ptr = [%c]\n",**ptr);


    return 0;
}

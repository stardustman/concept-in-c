#include<stdio.h>

int main(void)
{
    char ch = 'c';
    char c = 'a';

    char *const ptr = &ch; // A constant pointer
    // assignment of read-only variable 'ptr'
    ptr = &c; // Trying to assign new address to a constant pointer. WRONG!!!!

    return 0;
}

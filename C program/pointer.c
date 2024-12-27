#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int *ptr;
    ptr=&a;
    *ptr=&a;
    printf("%d",ptr);
    printf("%d",*ptr);
    return 0;
}
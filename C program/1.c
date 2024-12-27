#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the numbers for a and b");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("The value of a after swapping is %d \n the value of b is %d",a,b);
}
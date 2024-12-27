#include<stdio.h>
int main()
{
    int mrand[10]={1,234,53,55,27,107,92,43,11,67};
    int i,x;
    scanf("%d",&i);
    x=mrand[i%10];
    printf("x=%d\n",x);
    return 0;
}
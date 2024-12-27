#include<stdio.h>
int main()
{
    int m,n,sum=0;
    printf("enter the value of m:");
    scanf("%d",&m);
    printf("Entyer the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i; 
    }
    printf("sum of numbers from m to n=%d \n",sum);
    float avg=sum/n;
    printf("Average of numbers is =%f\n",avg);
    return 0;
}
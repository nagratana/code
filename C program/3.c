#include<stdio.h>
int main()
{
    int n,p=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp =n;
    while(n>0)
    {
        int rem = n % 10;
        p = (p)+(rem*rem*rem);
        n = n/10;
    }
    if(temp == p)
    {
        printf("Entered number is  amstrong number");
    }else{
        printf("Entered number is not an amstrong nunber");
    }
    return 0;
}
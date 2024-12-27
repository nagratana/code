#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    printf("Enter the string :");
    scanf("%s",str);
    int length=strlen(str);
    printf("The length ofn the string is %d :",length);

    for(int i=0,j=length-1;i<j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("The reversed string is :%s",str);
    
    return 0; 
}   
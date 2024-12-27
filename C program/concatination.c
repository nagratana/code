#include<stdio.h>
int main()
{
    char str1[21],str2[21],str3[41];
    int i,j;
    printf("Enter the string 1\n");
    scanf("%s",str1);
    printf("Enter the string 2\n");
    scanf("%s",str2);

    for(i=0,j=0;str1[i]!='\0';i++)
    {
        if(str1[i]!='\n')
        {
            str3[j++]=str1[i];
        }
    }
    for(i=0;str2[i]!='\0';i++)
    {
        if(str2[i]!='\n')
        {
            str3[j++]=str2[i];
        }
    }
    str3[j]='\0';
    printf("Conacatinated string is : %s",str3);

        return 0;
}
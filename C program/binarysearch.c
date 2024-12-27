#include<stdio.h>
int main()
{
    int n,i,a[100],key,first,last, mid;
printf("enter the size of the array:");
scanf("%d",&n);

printf("enter the %d elemrnts:",n);

for(i = 0;i < n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the search key:");
scanf("%d",&key);
first =0;
last = n-1;
mid = (first + last)/2;

while(first <= last)
{
    if(a[mid] < key)

        first = mid + 1;

    else if(a[mid]== key)
    {
        printf(" %d Search /a found:%d",key,mid+1);
        break;
    }
    else

      last = mid - 1;
      mid = (first + last)/2;

}
if (first > last )
{
    printf("Element not found");
    return 0;
}
}
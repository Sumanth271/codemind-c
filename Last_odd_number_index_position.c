#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count;
    for(i=a-1;i>=0;i--)
    {
        count=0;
        if(arr[i]%2!=0)
        {
            count+=i;
            break;
        }
    }
    printf("%d",count);
}
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count;
    for(i=n - 1;i>=0;i--)
    {
        count=0;
        if(arr[i]%2!=0)
        {
            count+=arr[i];
            break;
        }
    }
    printf("%d",count);
}
#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
    }
    int count=0;
    for(i=0;i<a;i++){
        if(arr[i] <= (sum/a))
        {
        count++;
        }
    }
    printf("%d",count);
}
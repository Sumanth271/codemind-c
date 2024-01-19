#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int temp=n;
    for(i=1;i<n;i++)
    {
        if(temp%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("PERFECT");
    }
    else if(sum<n)
    {
        printf("DEFICIENT");
    }
    else if(sum>n)
    {
        printf("ABUNDANT");
    }
}
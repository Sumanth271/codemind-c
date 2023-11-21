#include<stdio.h>
int main()
{
    int i,n,r=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        r+=i;
    }
    printf("%d",r);
}
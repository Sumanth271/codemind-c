#include<stdio.h>
int main()
{
    int i,n,ds=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ds+=i;
    }
    printf("%d",ds);
}
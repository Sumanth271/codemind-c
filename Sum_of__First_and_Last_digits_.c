#include<stdio.h>
int main()
{
    int n,r,ld;
    scanf("%d",&n);
    ld=n%10;
    while(n>0)
    {
        r=n%10;
        n=n/10;
    }
    printf("%d",ld+n+1);
}
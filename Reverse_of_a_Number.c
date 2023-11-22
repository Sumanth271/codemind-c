#include<stdio.h>
int main()
{
    int n,i,rev=0,x;
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    printf("%d",rev);
}
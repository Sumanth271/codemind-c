#include<stdio.h>
int main()
{
    int n,rev=0,x,t;
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        t=n%10;
        rev=rev*10+t;
        n=n/10;
    }
    if(rev==x)
    printf("True");
    else
    printf("False");
}
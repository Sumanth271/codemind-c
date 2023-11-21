#include<stdio.h>
int main()
{
    int i,n,t,rev=0,x;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        x=t%10;
        rev=rev*10+x;
        t=t/10;
    }
    if(rev==n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
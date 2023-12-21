#include<stdio.h>
int main()
{
    float d,sum=0,i,n;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        d=1/i;
        sum+=d;
    }
    printf("%.2f",sum);
}
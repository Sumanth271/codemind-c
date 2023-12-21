#include<stdio.h>
int main()
{
    int m,n,i,a,lcm,hcf;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        a=m*i;
        if(a%n==0)
        {
            lcm=m;
            break;
        }
    }
    hcf=m*n/a;
    printf("%d",hcf);
}
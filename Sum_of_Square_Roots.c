#include<stdio.h>
#include<math.h>
int main()
{
    int i,m,n;
    float sum=0.0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        float x=sqrt(i);
        sum+=x;
    }
    printf("%.2f",sum);
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,sum=0,sqsum=0,sumsq;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        sumsq=pow(sum,2);
    }
    for(j=1;j<=n;j++)
    {
        sqsum=sqsum+pow(j,2);
    }
    printf("%d
",abs(sqsum-sumsq));
}
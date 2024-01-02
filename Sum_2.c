#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    int i,sum=0;
    for(i=a;i<=b;i++)
    {
        if(i%x==0 && i%y!=0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
}
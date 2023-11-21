#include<stdio.h>
int main()
{
    int m,n,i,s;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
          s=m*i;
          if(s%n==0)
          {
              printf("%d",s);
              break;
          }
    }
}
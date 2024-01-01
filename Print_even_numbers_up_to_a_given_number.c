#include<stdio.h>
int main()
{
	int i,n,count;
	int a,b;
	scanf("%d%d", &a, &b);
	for(n=a;n<=b;n++)
	{
	 if(n%2==0)
	 printf("%d ",n);
    }
}

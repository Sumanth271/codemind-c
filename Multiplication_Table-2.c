#include<stdio.h>
int main()
{
	int i,x,y;
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++)
	{
    	printf("%d x %d = %d
",x,i,i*x);
    }
}
#include<stdio.h>
int main()
{
	int i,n,j;
	scanf("%d",&j);
	for(n=1;n<=j;n++)
	{
		for(i=1;i<=j;i++)
		{
			printf("%d ",i);
		}
		printf("
");
	}
}
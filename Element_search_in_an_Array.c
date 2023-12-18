#include<stdio.h>
int main()
{
	int i,a;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int x,flag=0;
	scanf("%d",&x);
	for(i=0;i<a;i++)
	{
		if(arr[i]==x)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("True");
	}
	else printf("False");
}
#include<stdio.h>
int main()
{
    int n,sq,r,count=0,rev=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        rev=rev*10+r;
        sq=sq/10;
        count+=r;
    }
    if(count==n)
    {
    	printf("Neon Number");
	}
	else 
	{
		printf("Not Neon Number");
	}
}
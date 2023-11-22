#include<stdio.h>
int main()
{
    int m,n,i,count=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        count+=i;
    }
    
    if(count==n)
    printf("Amicable");
    else 
    printf("Not Amicable");
}
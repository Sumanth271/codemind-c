#include<stdio.h>
int main()
{
    int n;
    int count=0,product=1;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        int r=n%10;
        count+=r;
        n=n/10;
    }
    while(temp>0)
    {
        int r=temp%10;
        product*=r;
        temp=temp/10;
    }
   
    if(count==product)
    {
        printf("Spy Number");
    }
    else 
    {
        printf("Not Spy Number");
    }
}
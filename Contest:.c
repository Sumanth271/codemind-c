#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=b+(c*2);
    if (a<=d)
    printf("Qualify");
    else 
    printf("Not Qualify");
}
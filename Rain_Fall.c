#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<3)
    {
        printf("LIGHT");
    }
    else if(3<=x and x<7)
    {
        printf("MODERATE");
    }
    else
    {
        printf("HEAVY");
    }
}
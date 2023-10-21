#include<stdio.h>
int main()
{
    float x,y,z;
    scanf("%f%f%f",&x,&y,&z);
    printf("%.2f
",x*0.12);
    printf("%.2f",x+y+z+(x*0.12));
}
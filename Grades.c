#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    if((s1+s2+s3+s4+s5)/5>=90)
    {
        printf("Grade A");
    }
    else if((s1+s2+s3+s4+s5)/5>=80)
    {
        printf("Grade B");
    }
    else if((s1+s2+s3+s4+s5)/5>=70)
    {
        printf("Grade C");
    }
    else if((s1+s2+s3+s4+s5)/5>=60)
    {
        printf("Grade D");
    }
    else if((s1+s2+s3+s4+s5)/5>=40)
    {
        printf("Grade E");
    }
    else if((s1+s2+s3+s4+s5)/5<40)
    {
        printf("Grade F");
    }
}
#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if( n>='A'&& n<='Z')
    {
        printf("uppercase alphabet");
    }
    else if( n>='a' && n<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}
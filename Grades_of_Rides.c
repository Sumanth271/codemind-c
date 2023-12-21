#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    scanf("%d%d%d",&x,&y,&z);
    a=x>50;
    b=y>60;
    c=z>100;
    if(a && b && c){
        printf("10");
    }
    else if(a&&b){
        printf("9");
    }
    else if(b&&c){
        printf("8");
    }
    else if(a&&c){
        printf("7");
    }
    else if(a||b||c){
        printf("6");
    }
    else {
        printf("5");
    }
}
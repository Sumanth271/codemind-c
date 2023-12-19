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
    int flag=0;
    for(i=0;i<a;i++)
    {
        if(arr[i]%2!=0)
       {
           printf("False");
        flag=1;
        break;
       }
    }
    if(flag==0)
    {
        printf("True");
    }
   
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    if(x>0)
    printf("number is positive ");
    else if(x<0)
    printf("number is negative");
    else
    printf("number is zero");
    
    return 0;
}

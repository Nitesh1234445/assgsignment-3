#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
    printf("number is divisible by 3 or 7");
    else
    printf("number is not divisible by 3 or 7");
    
    
    return 0;
}

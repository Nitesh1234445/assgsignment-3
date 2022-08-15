#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x&1)
    printf("number is odd");
    else
    printf("number is even");
    
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{    
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%5)
    printf("not divisible by 5");
    else 
    printf("divisible by 5");

    return 0;
}

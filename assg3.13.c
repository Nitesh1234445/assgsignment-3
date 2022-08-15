#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%6)
    printf("not divisible by 2 and 3");
    else
    printf("divisible by 2 and 3");

    return 0;
}

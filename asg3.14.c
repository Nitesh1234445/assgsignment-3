#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%7 && x%3)
    printf("number is not divisible by 7 or 3");
    else
    printf("number is  divisible by 7 or 3 ");

    return 0;
}

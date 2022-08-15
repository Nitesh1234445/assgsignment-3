#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("enter a year");
    scanf("%d",&year);
    if(year%400==0)
    printf("leap year ");
    else if(year%4)
    printf("not a leap year");
    else
    printf("leap year");
    
    return 0;
}

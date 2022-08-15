#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m;
    printf("enter month number");
    scanf("%d",&m);
    if(m=1)
    printf("%d",31);
    else if(m=2)
    printf("%d",28);
    else if(m=3)
    printf("%d",31);
    else if(m=4)
    printf("%d",30);
    else if(m=5)
    printf("%d",31);
    else if(m=6)
    printf("%d",30);
    else if(m=7)
    printf("%d",31);
    else if(m=8)
    printf("%d",31);
    else if(m=9)
    printf("%d",30);
    else if(m=10)
    printf("%d",31);
    else if(m=11)
    printf("%d",30);
    else if(m=12)
    printf("%d",31);
    
    return 0;

}
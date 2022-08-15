#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter an alphabet ");
    scanf("%c",&ch);
    if('A'<=ch&&ch<='Z')
    printf("upper case");
    else
    printf("lower case");

    return 0;
}

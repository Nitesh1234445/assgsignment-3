#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if('A'<=ch && ch<='Z')
    printf("upper case alphbet ");
    else if('a'<=ch && ch<='z')
    printf("lower case alphabet");
    else if('1'<=ch && ch<='9')
    printf("digit");
    else 
    printf("special character ");
    

    return 0;
}

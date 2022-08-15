#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x/10)
    {
        x/=10;
        if(x/10)
        {
            x/=10;
            if(x/10)
            printf("not a three digit number ");
            else
            printf("number is three digit number");
            
        }
        else
        printf("not a three digit number");
    }
    else
    printf("not a three digit number");

    return 0;
}

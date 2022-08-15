#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d is greatest no.",a);
    else
    {
        if(b>c)
        printf("%d is grestest no.",b);
        else
        printf("%d is greatest no.",c);

    }
    return 0;
}

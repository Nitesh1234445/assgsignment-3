#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    if(x>=y)
    printf("%d",x);
    else
    printf("%d",y);

    return 0;
}

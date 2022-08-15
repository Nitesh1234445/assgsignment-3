#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c)
    {
        if(b+c>a)
       {
        if(c+a>b)
        printf("triangle is valid");
        else 
        printf("trianhle is not valid");
        }
        printf("triangle is not valid");
    } 
    printf("triangle is not valid");  
     
    return 0;
}

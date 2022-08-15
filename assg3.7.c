#include<stdio.h>
int main(int argc, char const *argv[])
{
    int D,a,b,c;
    printf("enter value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    printf("roots are real and distinct");
    else
    {
        if(D<0)
        printf("roots are imaginary");
        else
        printf("roots are real and equal");
        
    }
    return 0;
}

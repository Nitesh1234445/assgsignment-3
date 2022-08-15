#include<stdio.h>
int main()
{
    int cp,sp,x;
    printf("enter cost prise and selling price of product ");
    scanf("%d%d",&cp,&sp);
    x=((sp-cp)/cp)*100.0;
    if(x>0)
    printf("profit prcentage is %f",x);
    else 
    printf("loss percentage is %f",-x);

    return 0;
}

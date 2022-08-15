#include<stdio.h>
int main(int argc, char const *argv[])
{
    int s1,s2,s3,s4,s5;
    printf("enter marks of all subjects ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    if(s1<33)
    printf("failed");
    else if(s2<33)
        printf("failed");
    else if(s3<33)
         printf("failed");
    else if(s4<33)
         printf("failed");
    else if(s5<33)
         printf("failed");
    else
         printf("passed");

    return 0;
}

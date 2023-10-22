#include<stdio.h>

int number(int a)
{
    return a*a;
}
int main()
{
    int a,b;
    printf("enter a number to be squared:");
    scanf("%d",&a);
    b=number(a);
    printf("the sqaure of %d is %d",a,b);
    return 0;
}


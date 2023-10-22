#include<stdio.h>

int number(int a)
{
    return a*a*a;
}
int main()
{
    int a,b;
    printf("enter a number to be cubed:");
    scanf("%d",&a);
    b=number(a);
    printf("the cube of %d is %d",a,b);
    return 0;
}


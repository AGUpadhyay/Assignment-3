//WAP to cheak whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    printf("%d is positive",a);
    else
    printf("%d is non-positive",a);
    return 0;
}

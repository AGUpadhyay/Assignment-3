//WAP to cheak whether a given number divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:\t");
    scanf("%d",&num);
    if(num%7==0  && num%3==0)
        printf("%d is divisible by both 7 and 3",num);
    else if(num%3==0)
        printf("%d is divisible by 3",num);
    else if(num%7==0)
        printf("%d is divisible by 7",num);
    else
        printf("%d is not divisible by both 7 and 3",num);
    return 0;
}

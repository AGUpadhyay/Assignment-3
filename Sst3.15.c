//WAP to cheak whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:\t");
    scanf("%d",&num);
    if(num>0)
        printf("%d is Positive Number",num);
    else if(num==0)
        printf("%d is Zero",num);
    else
        printf("%d is Negative Number",num);
    return 0;
}

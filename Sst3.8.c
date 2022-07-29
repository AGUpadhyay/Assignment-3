 //WAP to cheak whether a given year is a leap year or not.
#include<stdio.h>

int main()
 {
    int a;
    printf("Enter Year:\t");
    scanf("%d",&a);
    if(a%4==0)
        printf("%d is a leap year.",a);
    else
            printf("%d is not a leap year.",a);
    return 0;
 }

//WAP which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month number:\t");
    scanf("%d",&a);
    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
        printf("31 days in this month",a);
    else if(a==4 || a==6 || a==9 || a==11)
        printf("30 days in this month",a);
    else if(a==2)
        printf("This month has 28 or 29 days",a);
    else
        printf("Enter a valid month number",a);
    return 0;
}

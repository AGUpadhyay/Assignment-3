//WAP to cheak whether the given number is a three-digit number or not.
 #include<stdio.h>
 int main()
 {
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a>=100 && a<=999)
    printf("Given number %d is a Three digit Number",a);
    else
    printf("Given number %d is not a Three digit Number",a);
    return 0;

 }

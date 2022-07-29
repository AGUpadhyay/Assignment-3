 //WAP to cheak whether the given number is even or odd without using % operator.
 #include<stdio.h>
 int main()
 {
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a & 1)
    printf("Given number %d is an Odd Number",a);
    else
    printf("Given number %d is an Even Number",a);
    return 0;

 }

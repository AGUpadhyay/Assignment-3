 //WAP to cheak whether roots of a given quadratic eaution are equal & distinct,real & equal or imaginary roots.
#include<stdio.h>

int main()
 {
    float a,b,c,d;
    printf("Enter value of A ,B & C :");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    printf("Discriminant is %0.2f\t",d);
    if(d>=0)
    {
        if(d>0)
            printf("Roots are Real & Distinct.");
        else
            printf("Roots are Real & Equal.");
    }
    else
        printf("Roots are Imaginary.");
    return 0;
 }

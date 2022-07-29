 //WAP to find the greatest among three given numbers.Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
 {
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is greatest among three numbers.",a);
    else if(c>a && c>b)
        printf("%d is greatest among three numbers.",c);
    else if(b>a && b>c)
        printf("%d is greatest among three numbers.",b);
    else if(a==b && c>a)
        printf("%d is greatest among three numbers.",c);
    else if(c==b && c<a)
        printf("%d is greatest among three numbers",a);
    else if(a==c && a<b)
        printf("%d is greatest among three numbers",b);
    else
        printf("%d is greatest among three numbers",a);
    return 0;
 }

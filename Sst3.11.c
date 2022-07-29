//WAP to take marks of 5 subjects from the user.Assune marks are given out of 100 and passing marks is 33.Now display whether the candidate passed the exmination or failed.
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter marks of 5 Subjects:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f=a+b+c+d+e;
    if(a<=100 && b<=100 && c<=100 && d<=100 && e<=100)
        {
            if(f>165)
                printf("Congratulates, You are pass");
            else
                printf("You are fail.");
        }
    else
        printf("Please enter valid number.");
    return 0;
}

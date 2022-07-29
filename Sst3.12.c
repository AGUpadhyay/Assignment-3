//WAP to cheak whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:\t");
    scanf("%c",&ch);
    if(ch>='A' & ch<='Z')
        printf("Uppercase Alphabet");
    else if(ch>='a' & ch<='z')
        printf("Lowercase Alphabet");
    else
        printf("Enter a valid character");
    return 0;
}

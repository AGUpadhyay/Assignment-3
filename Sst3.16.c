//WAP to cheak whether a given alphabet is in uppercase alphabet, lowercase alphabet, a digit or a special character.
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
    else if(ch>='0' & ch<='9')
        printf("%c is a digit",ch);
    else
        printf("%c is special character",ch);
    return 0;
}

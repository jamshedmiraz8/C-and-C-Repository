#include <stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any Lowercase Latter : ");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("This is Uppercase Latter : %c",upper);
}

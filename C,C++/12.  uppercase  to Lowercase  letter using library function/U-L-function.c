#include <stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any Uppercase Latter : ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("This is Lowercase Latter : %c",lower);
}

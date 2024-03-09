#include<stdio.h>
int main()
{

    double a,b,c,s,area;


    printf("Enter the value of A: ");
    scanf("%lf", &a);
    printf("Enter the value of B: ");
    scanf("%lf", &b);
    printf("Enter the value of C: ");
    scanf("%lf", &c);


    s = (a+b+c)/2;
    printf("S = %.2lf\n", s);


    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of Triangle Field is: %.2lf\n", area);

    getch();
}

//Write a program that takes tow integer and display sum
 #include<stdio.h>
 int main()
 {
     int num1,num2,sum;
     float avg;
     printf("Enter Tow Number :");
     scanf("%d %d",&num1,&num2);
     sum = num1 + num2;
     printf("This SUM: %d\n",sum);
     avg = (float)sum/2;
     printf("This Avergae : %.1f",avg);
 }

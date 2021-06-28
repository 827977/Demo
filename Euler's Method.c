/*
Problem Statement: Write a C program to implement Euler's Method.

Name    - Adan Hussain
Roll No.- 04
Section - 'B'
*/

#include<stdio.h>
#include<conio.h>
#define f(x,y) x+y

int main()
{
     float x0,y0,xn,h,yn,slp;
     int i, n;
     printf("Enter Initial Conditions x0 and y0\n");
     scanf("%f", &x0);
     scanf("%f", &y0);
     printf("Enter xn for which yn to be calculated\n ");
     scanf("%f", &xn);
     printf("Enter number of steps\n");
     scanf("%d", &n);
     h = (xn-x0)/n;

 for(i=0; i < n; i++)
 {
  slp = f(x0, y0);
  yn = y0 + h * slp;
  y0 = yn;
  x0 = x0+h;
 }
 printf("\nValue of yn = %f at xn = %f",xn, yn);
 return 0;
}

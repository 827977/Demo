/*
Problem Statement : Write a C program to implement Lagrange's Interpolation

Name    - Adan Hussain
Roll No.- 04
Section - 'B'
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    float x[50],y[50],x0,yx0=0,q;
    int i,j,n;

    /*Enter Input*/
    printf("Enter number of values ");
    scanf("%d",&n);
    printf("Enter x with corresponding y\n");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    printf("Enter Interpolation point: ");
    scanf("%f",&x0);
    /*Lagrange's Interpolation Implement*/
    for(i=1;i<=n;i++)
    {
        q=1;
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                q=q*(x0 - x[j])/(x[i]-x[j]);
            }
        }
        yx0 = yx0 + q*y[i];
    }
    printf("Interpolated value at %.3f is %.3f.",x0,yx0);
}

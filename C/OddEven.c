#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter NUmber : ");
    scanf("%d",&num);
    if(num%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
    getch();
}
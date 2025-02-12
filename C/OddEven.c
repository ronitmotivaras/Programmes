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
    
    /*
        Odd - Even Check Condiotions

    num % 2 == 0 => E-O
    num % 2 != 0 => O-E
    Num % 2 == 1 => O-E
    Num % 2 != 1 => E-O
    */
    getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
    //Swap Number Without 3rd Variable
    int a,b,c;
    printf("Enter 2 Numbers : ");
    scanf("%d %d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After Swapping A : %d \nB : %d",a,b);
    getch();
}
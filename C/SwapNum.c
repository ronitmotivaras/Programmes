#include<stdio.h>
#include<conio.h>
void main()
{
    //Swap Number With 3rd Variable
    int a,b,c;
    printf("Enter 2 Numbers : ");
    scanf("%d %d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("After Swapping A : %d \nB : %d",a,b);
    getch();
}
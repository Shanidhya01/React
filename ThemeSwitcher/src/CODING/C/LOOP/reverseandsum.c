#include<stdio.h>
#include<conio.h>

void main( )
{

 int num;
 int sum=0;
 int rev=0;
 int d;
 printf("Enter the number: ");
 scanf("%d",&num);

while(num){
  d=num%10;
  num=num/10;
  sum=sum+d;
  rev=rev*10+d;
}

printf("Sumof digits = %d",sum);
printf("\nReverse of the number = %d",rev);
getch( );
}
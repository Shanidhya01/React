#include <stdio.h>
int main(){
   float m1;
    printf("Enter a number : ");
    scanf("%f",&m1);
     float m2;
    printf("Enter a number : ");
    scanf("%f",&m2);
     float m3;
    printf("Enter a number : ");
    scanf("%f",&m3);
     float m4;
    printf("Enter a number : ");
    scanf("%f",&m4);
     float m5;
    printf("Enter a number : ");
    scanf("%f",&m5);
    float p = (m1+m2+m3+m4+m5)/5;
   printf("the percentage of 5 subject is : %f \n",p);
int p;
  printf("Enter percentage : ");
     scanf("%d",&p);

   if(p>80){
    printf("A GRADE");
   }
     else if(p>60){
    printf("B GRADE");
    }
  else if(p>50){
   printf("C GRADE");
  }
   else (p>40);
    {
    printf("D GRADE");
  }  
  return 0;
    }
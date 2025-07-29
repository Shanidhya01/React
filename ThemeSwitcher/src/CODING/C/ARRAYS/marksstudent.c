#include<stdio.h>
int main (){
  int marks[10];  // = {56,56,85,68,3,2,12,41,24,59};
  for (int i = 0; i <= 9; i++)
  {
    printf(" ENTER marks  %d\n ", i+1);
    scanf("%d", &marks[i]);
  }
  for (int i = 0; i <= 9; i++){
      if(marks[i]<35){
          printf("%d ",i);
       }
  }
  return 0;
}
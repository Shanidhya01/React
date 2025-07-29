#include <stdio.h>
#include <string.h>
int main() {
   char str[5][50], temp[50];
   printf("Enter 5 words: ");
   for (int i = 0; i < 5; ++i) {
      gets(str[i]);
   }
   for (int i = 0; i < 5; ++i) {
      for (int j = i + 1; j < 5; ++j) {
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }
   printf("\nIn the dictnary order: \n");
   for (int i = 0; i < 5; ++i) {
      puts(str[i]);
   }
   return 0;
}
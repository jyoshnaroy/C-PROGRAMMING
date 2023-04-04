#include<stdio.h>

int main() {
   char ch;

   printf("\nEnter The Character : ");
   scanf("%c", &ch);

   if (ch >= 'A' && ch <= 'Z')
      printf("Character is Upper Case Letters");
   else
      printf("Character is lowerCase Letters");

   return (0);
}


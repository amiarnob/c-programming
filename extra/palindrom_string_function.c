#include <stdio.h>
#include <string.h>

int main()
{
   char s[100], ss[100];

   printf("Enter a string to check if it is a palindrome\n");
   gets(s);

   strcpy(ss,s);
   strrev(ss);

   if (strcmp(s,ss) == 0)
      printf("Entered string is a palindrome.\n");
   else
      printf("Entered string isn't a palindrome.\n");

   return 0;
}

#include<stdio.h>
main()
{
  char ch;
  printf("ENTER a character : ");
  scanf("%c",&ch);
  if(ch >= 'a' && ch <= 'z') {
   printf("%c is lower case\n", ch);
   }
  if(ch >= 'A' && ch <= 'Z') {
   printf("%c is upper case\n", ch);
   }

  return 0;
}

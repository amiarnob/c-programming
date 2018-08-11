
//diffrent conversion with a variable & overflow in implicit constant conversion

#include <stdio.h>
int main()
{
      int a;
      a = 1000;
   printf("Value of a is %d\n", a);
      a = -21000;
   printf("Value of a is %d\n", a);
      a = 10000000;
   printf("Value of a is %d\n", -a);
      a = -10000000;
   printf("Value of a is %d\n", -a);
      a = 100020004000503;
   printf("Value of a is %d\n", a);
      a = -10087009;
   printf("Value of a is %d\n", --a);

   return 0;


}

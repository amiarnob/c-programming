#include <stdio.h>
int main()
{
    int n, revnum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(revnum=0; n!=0; n/=10)
    {
        remainder = n%10;
        revnum = revnum*10 + remainder;
    }
    printf("Reversed Number = %d", revnum);
    return 0;
}

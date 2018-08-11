#include <stdio.h>
int main()
{
    int num, revnum = 0, remainder,temp;
    printf("Enter an integer: ");
    scanf("%d", &num);

    temp=num;
    for(revnum=0; num!=0; num/=10)
    {
        remainder = num%10;
        revnum = revnum*10 + remainder;
    }
    num=temp;
    if(num==revnum)
        printf("Entered number %d is a palindrome.\n",num);
    else
        printf("Entered number is %d not a palindrome.\n",num);

    return 0;
}

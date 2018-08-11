#include <stdio.h>
#include <math.h>
int main()
{
    int num, result,remainder,temp,n;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp=num;

    for(n=0;num!=0;n++,num/=10);
    num=temp;

    for(result=0; num!=0; num/=10)
    {
        remainder = num%10;
        result+= pow(remainder,n);
    }

    num=temp;
    if(num==result)
        printf("Entered number %d is a Armstrong number\n",num);
    else
        printf("Entered number is %d not a Armstrong number.\n",num);

    return 0;
}

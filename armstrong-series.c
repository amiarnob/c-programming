#include <stdio.h>
#include <math.h>
int armtest(int num)
{
    long int  result,temp;
    int n,remainder;
    temp=num;

    for(n=0; num!=0; n++,num/=10);
    num=temp;

    for(result=0; num!=0; num/=10)
    {
        remainder = num%10;
        result+= pow(remainder,n);
    }
    return result;

}
int main()
{
    long int i,n;
    printf("Enter last Armstrong number of the series:\n");
    scanf("%ld",&n);
    for(i=0; i<=n; i++)
    {
        if(i==armtest(i))
            printf("%ld ",armtest(i));
    }
}

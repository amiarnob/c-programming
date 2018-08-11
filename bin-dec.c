///binary to decimal
#include<stdio.h>
#include<math.h>
int main()
{
    long long unsigned int n;
    int decimal=0,i,reminder=0;
    scanf("%llu",&n);
    for(i=0; n!=0; ++i)
    {
        reminder=n%10;
        n/=10;
        decimal+=reminder*pow(2,i);
    }

    printf("%d",decimal);
}

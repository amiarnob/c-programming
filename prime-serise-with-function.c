#include<stdio.h>
long long int chkprime(long long int n)
{
    int chk=1;
    long long int i;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            chk=0;
            break;
        }
    }

    return chk;
}

int main()
{
    long long int i,n;
    printf("Enter a limit of  prime number series:\n");
    scanf("%lld",&n);
    for(i=2; i<=n; i++)
    {
        if(chkprime(i)==1)
            printf("%lld ",i);
    }
    return 0;
}


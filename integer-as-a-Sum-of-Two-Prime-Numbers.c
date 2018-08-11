///nteger as a Sum of Two Prime Numbers
#include<stdio.h>
int chkprime(int n)
{
    int i,chk=1;
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
    int i,n,check=0;
    scanf("%d",&n);

    for(i=2; i<=n/2; i++)
    {
        if(chkprime(i)==1 && chkprime(n-i)==1)
        {
            printf("%d = %d + %d\n", n, i, n - i);
            check=1;
        }
    }
    if(check==0)
        printf("%d cannot be expressed as the sum of two prime numbers.", n);
    return 0;
}


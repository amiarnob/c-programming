///factoria,nCr,nPr
#include<stdio.h>
long long fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

long long nCr(int n, int r)
{
    if(n<0)
        printf("undefined");
    else
        return fact(n)/(fact(r)*fact(n-r));
}
long long nPr(int n, int r)
{
    if(n<0)
        printf("undefined");
    else
        return fact(n)/fact(n-r);
}

int main()
{
    int n,r;

    printf("Enter n and r:\n");
    scanf("%d%d",&n,&r);
    printf("factorial value of %d is %lld;\nfactorial value of %d is %lld;",n,fact(n),r,fact(r));
    printf("\n%dC%d is %lld;",n,r,nCr(n,r));
    printf("\n%dP%d is %lld;\n",n,r,nPr(n,r));
    return 0;
}

#include<stdio.h>
long long unsigned int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int i,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Factorial of %d is: %d\n",n,fact(n));

    return(0);
}

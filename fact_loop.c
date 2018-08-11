#include<stdio.h>
int main()
{
    int n;
    long long unsigned fact=1,i;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact*=i;
    }

    printf("Factorial of %d is: %llu\n",n,fact);

    return(0);
}

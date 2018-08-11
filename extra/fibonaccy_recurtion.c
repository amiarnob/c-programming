#include<stdio.h>
long long unsigned int fib(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    int i,n;
    printf("Enter last fibonaccy of the series:\n");
    scanf("%d",&n);

    for(i=1; fib(i)<=n; i++)
    {
        printf("%llu ",fib(i));
    }
    return(0);

}

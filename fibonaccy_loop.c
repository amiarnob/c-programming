#include<stdio.h>
int main()
{
    long long unsigned int a=0,b=1,c;
    int i,n;
    printf("Enter last fibonaccy of the series:\n");
    scanf("%d",&n);

    for(i=1;a<n;i++)
    {
        printf("%llu ",a);
        c=a+b;
        a=b;
        b=c;
    }

    return(0);

}

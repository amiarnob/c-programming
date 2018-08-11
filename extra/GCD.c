#include<stdio.h>
int GCD(int n1,int n2)
{
    int i,gcd;
    for(i=1; i<=n1&&i<=n2; i++)
    {
        if(n1%i==0&&n2%i==0)
            gcd=i;
    }
    return gcd;

}
int main()
{
    int n,i;
    printf("How many number:\n");
    scanf("%d",&n);
    int arr[n],value;
    printf("Enter %d numbers:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    value=arr[0];
    for(i=0; i<n; i++)
    {
        value=GCD(value,arr[i]);
    }
    printf("\tGCD is %d",value);
}

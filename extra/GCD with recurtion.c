#include<stdio.h>
int GCD(int n1,int n2)
{
    int i,gcd,max,min;
    max=n1>n2?n1:n2;
    min=n1<n2?n1:n2;

    if(max%min==0)
        return min;
    else
        return GCD(max%min,min);
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

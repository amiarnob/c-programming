#include<stdio.h>
int lcm(int n1,int n2)
{
    int max;
    max=n1>n2?n1:n2;
    while(1)
    {
        if(max%n1==0&&max%n2==0)
        {
            return max;
            break;
        }
        max++;
    }
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
        value=lcm(value,arr[i]);
    }
    printf("\tLCM is %d",value);
}

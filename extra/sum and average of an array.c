#include<stdio.h>
float SUM(float arr[],int n)
{
    float sum=0.0;
    int i;
    for(i=0; i<n; i++)
    {
        sum+=arr[i];
    }

    return sum;

}
float AVG(float sum,int n)
{

    return sum/n;

}
int main()
{
    float arr[1000];
    int i,n;
    printf("Enter how many numbers:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%f",&arr[i]);
    }
    printf("Sum is --> %.2f\n",SUM(arr,n));
    printf("Avg is --> %.2f\n",AVG(SUM(arr,n),n));



}

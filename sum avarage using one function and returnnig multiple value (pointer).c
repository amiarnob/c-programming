//incomplete
#include<stdio.h>
float sumavg(float arr[],int n,float *avg)
{
    float sum=0.0;
    int i;
    for(i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    *avg=(sum/n);



}
int main()
{
    float arr[1000],sum;
    int i,n,x;
    printf("Enter how many numbers:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%f",&arr[i]);
    }
    sum=sumavg(arr,n,&x);
    printf("Sum is --> %.2f\n",sum);
    printf("Avg is --> %.2f\n",x);



}


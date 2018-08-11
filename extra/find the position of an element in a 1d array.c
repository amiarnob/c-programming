#include<stdio.h>
int main()
{
    int n,key;
    printf("Enter how many element:\n");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter %d element:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter an element to find its position:\n");
    scanf("%d",&key);
    for(i=0;i<n,key!=arr[i];i++);
    if(i==n)
    printf("%d not found!!\n",key);
    else
    printf("position of %d is (%d)",key,i+1);

}

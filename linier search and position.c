#include<stdio.h>
int main()
{
    int arr[100];
    int i,n,key;
    printf("Enter how many elements in the array:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a element to check:\n");
    scanf("%d",&key);
    for(i=0; i<n,arr[i]!=key; i++);
    printf("%d",i+1);

}

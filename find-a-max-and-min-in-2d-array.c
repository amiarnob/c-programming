///max minimum in a 2d array
#include<stdio.h>
void main()
{
    int r,c;
    printf("Enter dimnation of 2 d array:\n");
    scanf("%d%d",&r,&c);
    int arr[r][c],i,j,max,min;
    printf("Input %d*%d array:\n",r,c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    max=arr[0][0];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(max<arr[i][j])
                max=arr[i][j];
        }
    }
    min=arr[0][0];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(min>arr[i][j])
                min=arr[i][j];
        }
    }
    printf("-->%d is maximum & %d is minimum\n",max,min);

}

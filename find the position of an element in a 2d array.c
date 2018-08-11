///position of an element in a 2d array
#include<stdio.h>
void main()
{
    int r,c,key,x,y;
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
    printf("Enter an element to find its position:\n");
    scanf("%d",&key);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(key==arr[i][j])
                break;

        }
        if(key==arr[i][j])
            break;
    }
    if(i==r)
        printf("%d not found!!\n",key);
    else

        printf("position of %d is (%d,%d)",key,i+1,j+1);

}

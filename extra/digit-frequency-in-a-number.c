#include<stdio.h>
int frequency(int numarray[],int key,int *x)
{
    int i,count=0;
    for(i=0; i<=x; i++)
    {
        if(numarray[i]==key)
            count++;
    }
    return count;
}
int main()
{

    int num, i,r[100];
    int x=0;
    scanf("%d",&num);
    for(i=0; num!=0; i++,num/=10)
    {
        r[i]=num%10;
        x++;
    }
    for(i=0; i<=9; i++)
    {
        if(frequency(r,i,x)!=0)
            printf("%d occurs %d times;;\n",i,frequency(r,i,x));
    }

}



///decimal to binary
#include<stdio.h>
int main()
{
    int num,rem,base,bin;
    scanf("%d",&num);

    for(base=1,bin=0; num>0; base*=10,num/=2)
    {
        rem=num%2;
        bin=bin+rem*base;
    }

    printf("decimal:%d,, binary:%d ",num,bin);
    return 0;
}

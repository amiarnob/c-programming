#include<stdio.h>
float div(float m,float n)
{
    int i;
    for(i=1;m>=n;i++)
    {
        m-=n;
    }
    return --i;
}

int main()
{
    float m,n;
    printf("Enter 2 number;\n");
    scanf("%f%f",&m,&n);
    printf("%.2f / %.2f = %.2f",m,n,div(m,n));
}

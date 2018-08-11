#include<stdio.h>
float mult(float m,float n)
{
    float sum=0.0;
    int i;
    for(i=1;i<=n;i++)
    {
        sum+=m;
    }
    return sum;
}

int main()
{
    float m,n;
    printf("Enter 2 number;\n");
    scanf("%f%f",&m,&n);
    printf("%.2f X %.2f = %.2f",m,n,mult(m,n));
}

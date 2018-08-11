///leapyear series between the year m and n;
#include<stdio.h>
int leapyear(int year)
{
    if ((year % 400) == 0)
        return 1;
    else if ((year % 100) == 0)
        return 0;
    else if ((year % 4) == 0)
        return 1;
    else
        return 0;
}
void main()
{
    int m,n,i;
    printf("Enter the value of m And n to check the leap year between m & n:\n");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(leapyear(i)==1)
        {
            printf("%d ",i);
        }
    }

}

#include<stdio.h>
int main()
{
    int chk;
    long long unsigned int i,j,n;
    printf("Enter a limit of  prime number series:\n");
    scanf("%llu",&n);

    for(i=2; i<=n; i++)
    {
        chk=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                chk=0;
                break;
            }

        }
        if (chk==1)
            printf("%llu ",i);


    }
    return(0);

}

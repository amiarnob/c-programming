#include<stdio.h>
int frequency(char str[],char ch)
{
    int i,count=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch)
            count++;
    }
    return count;
}
void main()
{
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    char i;
    int freq[100];
    printf("\nFrequency of all characters in the given string: \n");
    for(i=32; i<=126; i++)
    {
        if(frequency(str,i)!=0)
            printf("%c occurs %d times\n",i,frequency(str,i));
    }

}

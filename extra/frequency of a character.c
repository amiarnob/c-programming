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
    char str[100],ch;
    printf("Enter a string:\n");
    gets(str);
    printf("Enter a character:\n");
    scanf("%ch",&ch);
    printf("%c occurs %d times;;",ch,frequency(str,ch));

}

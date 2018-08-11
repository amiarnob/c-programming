#include <stdio.h>
#include <string.h>
int main()
{
    char text[100];
    int begin, middle, end, length,chk=1;
    gets(text);
    for(length=0; text[length]!='\0'; length++);

    end = length - 1;
    middle = length/2;

    for (begin = 0; begin < middle; begin++,end--)
    {
        if (text[begin] != text[end])
            chk=0;
    }
    if(chk==1)
        printf("Palindrome.\n");
    else
        printf("Not a palindrome");

    return 0;
}

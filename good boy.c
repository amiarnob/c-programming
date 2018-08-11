#include<stdio.h>
#include<string.h>
int main()
{
    char chk[10],count[10];
    int i;
    int sum=0;
    printf("-->IF IT IS TRUE , THEN TYPE yes or YES or Yes... else no\n");

    printf("do you ever BUNK SCHOOL:\n");
    scanf("%s",chk);
    if((strcmp(chk,"yes")==0||strcmp(chk,"Yes")==0||strcmp(chk,"YES")==0))
        count[0]=5;
    else
        count[0]=0;

    strcpy(chk,"");
    printf("EVER MAKE LIPKISS??\n");
    scanf("%s",chk);
    if((strcmp(chk,"yes")==0||strcmp(chk,"Yes")==0||strcmp(chk,"YES")==0))
        count[1]=7;
    else
        count[1]=0;

    strcpy(chk,"");
    printf("Ever been slave of pappa's pocket??\n");
    scanf("%s",chk);
    if((strcmp(chk,"yes")==0||strcmp(chk,"Yes")==0||strcmp(chk,"YES")==0))
        count[2]=4;
    else
        count[2]=0;

    strcpy(chk,"");
    printf("DO U EVER have SEX WITH UNKOWN PEOPLE??\n");
    scanf("%s",chk);
    if((strcmp(chk,"yes")==0||strcmp(chk,"Yes")==0||strcmp(chk,"YES")==0))
        count[3]=12;
    else
        count[3]=0;

    strcpy(chk,"");
    printf("FRIEND ER SATHE MARAMARI!??\n");
    scanf("%s",chk);
    if((strcmp(chk,"yes")==0||strcmp(chk,"Yes")==0||strcmp(chk,"YES")==0))
        count[4]=3;
    else
        count[4]=0;

    strcpy(chk,"");
    printf("DO U EVER WATCH PORN??\n");
    scanf("%s",chk);
    if((strcmp(chk,"yes")==0||strcmp(chk,"Yes")==0||strcmp(chk,"YES")==0))
        count[5]=8;
    else
        count[5]=0;

    strcpy(chk,"");
    printf("DO U EVER CRUSHED ON TEACHER??\n");
    scanf("%s",chk);
    if((strcmp(chk,"yes")==0||strcmp(chk,"Yes")==0||strcmp(chk,"YES")==0))
        count[6]=6;
    else
        count[6]=0;

    strcpy(chk,"");

    printf("%d",sum);
    printf("DO U EVER fail in exam:\n");
    scanf("%s",chk);
    if((strcmp(chk,"yes")==0||strcmp(chk,"Yes")==0||strcmp(chk,"YES")==0))
        count[7]=5;
    else
        count[7]=0;

    for(i=0; i<=7; i++)
    {
        sum+=count[i];
    }
    printf("---->>> HEY BABY YOUR IS SCORE IS %d",sum);

}

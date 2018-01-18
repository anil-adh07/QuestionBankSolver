#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    FILE *fp,*ans;
    char year[4],qsn[4],c,yr[11];
    int soln,check_qsn_no, check_year;
    printf("\t\t\t\t\t\t\tWELCOME TO QUESTIONS SOLVER PROGRAMME!!");
    printf("\nThe Program contains the questions of the following year:\n");
    printf("\t\t\t\t\t\t\t\t\t2067\n");
    printf("\t\t\t\t\t\t\t\t\t2068\n");
    printf("\t\t\t\t\t\t\t\t\t2069\n");
    printf("\t\t\t\t\t\t\t\t\t2070\n");
    printf("\t\t\t\t\t\t\t\t\t2071\n");


    do
    {
        printf("\n\nEnter the year to display questions: ");
        scanf("%s",year);
        printf("\n\n");
        strcpy(yr,year);
        strcat(year,".txt");
        fp=fopen(year,"r");
        if(fp==NULL)
            printf("\n\nNOT a VALID year.\n");
        else
        {
            do
            {
                c=getc(fp);
                putchar(c);
            }
            while(c!=EOF);
            printf("\n\n\nDo you want the solution of any question?[1 for yes]:\t");
            scanf("%d",&soln);
            strcat(yr,"-");
            do
            {
                if(soln==1)
                {
                    strtok(yr,qsn);
                    printf("\n\nEnter the qsn no.: ");
                    scanf("%s",qsn);
                    printf("\n\n");
                    strcat(qsn,".txt");
                    strcat(yr,qsn);
                    ans=fopen(yr,"r");
                    printf("\n\n");
                    if(ans==NULL)
                        printf("\n\nNot a valid question number!");
                    else
                    {
                        char ch;
                        do
                        {
                            ch=getc(ans);
                            putchar(ch);
                        }
                        while(ch!=EOF);
                    }
                }
                else
                {
                    printf("\n\nTHANK YOU FOR USING PROGRAMME!!\n\n");
                    exit(1);
                    getch();
                }
                fclose(ans);
                printf("\n\n\nAny more questions? [1 for yes]:\t");
                scanf("%d",&check_qsn_no);
            }
            while(check_qsn_no==1);
        }
        printf("\n\nAny more years?[1 for yes]:\t");
        scanf("%d",&check_year);
    }
    while(check_year==1);
    printf("\n\nTHANK YOU FOR USING PROGRAMME!!");
    fclose(fp);
    exit(1);
    getch();
}

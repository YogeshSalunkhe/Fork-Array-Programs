#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
        int No[size],i,Max = 0,S_Max = 0;

        for(i = 0;i < size;i++)
        {
            printf("\n\t Enter Element %d => ",i+1);
            scanf("%d",&No[i]);
        }
        for(i = 0;i < size;i++)
        {
            if(No[i] > Max)
            {
                Max = No[i];
            }
        }

        for(i = 0;i < size;i++)
        {
            if(No[i] != Max && No[i] > S_Max)
            {
                S_Max = No[i];
            }
        }

        printf("\n\t Maximum Element In Given Array => %d",Max);
        printf("\n\t Second Maximum Element Of Given Array => %d",S_Max);

        getch();
        return 0;
}

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int No[size],i,E_cnt = 0,O_cnt = 0,Z_cnt=0;

    for(i = 0;i < size;i++)
    {
        printf("\n\t Enter Element %d => ",i+1);
        scanf("%d",&No[i]);
    }
    for(i = 0;i < size;i++)
    {
        if(No[i] == 0)
        {
            Z_cnt++;
        }
        if( No[i] % 2 == 0 && No[i] != 0)
        {
            E_cnt++;
        }
        else if(No[i] % 2 != 0)
        {
            O_cnt++;
        }

    }

    printf("\n\t Even Element In Given Array => %d",E_cnt);
    printf("\n\t Odd Element In Given Array => %d",O_cnt);
    printf("\n\t Zero Count In Given Array => %d",Z_cnt);

    getch();
    return 0;
}

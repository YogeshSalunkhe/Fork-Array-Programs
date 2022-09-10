#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int No[size],i,E_cnt = 0;

    for(i = 0;i < size;i++)
    {
        printf("\n\t Enter Element %d => ",i+1);
        scanf("%d",&No[i]);
    }

    for(i = 0;i < size; i++)
    {
        if(No[i] % 2 == 0)
        {
            E_cnt++;
        }
    }
    printf("\n\t Even Element Count In Given Array => %d",E_cnt);

    getch();
    return 0;
}

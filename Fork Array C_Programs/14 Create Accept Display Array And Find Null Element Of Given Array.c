#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int No[size],i,Z_cnt = 0;

    for(i = 0;i < size;i++)
    {
        printf("\n\t Enter Element %d => ",i+1);
        scanf("%d",&No[i]);
    }

    for(i = 0;i < size;i++)
    {
        if(No[i]== 0)
        {
            Z_cnt++;
        }
    }
    printf("\n\t  Null Element In Given Array => %d",Z_cnt);

    getch();
    return 0;
}

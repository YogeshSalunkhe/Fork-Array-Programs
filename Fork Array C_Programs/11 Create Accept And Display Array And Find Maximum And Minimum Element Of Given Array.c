#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int No[size],i,Res;

    for(i = 0;i < size;i++)
    {
        printf("\n\t Enter Element %d => ",i+1);
        scanf("%d",&No[i]);
    }

    for(i = 0; i < size;i++)
    {
        if(No[i] > Res)
        {
            Res = No[i];
        }
    }

    printf("\n\t Maximum Element In Given Array => %d",Res);

    Res=No[0];

    for(i = 0; i < size;i++)
    {
        if(No[i] < Res)
        {
            Res=No[i];
        }
    }

    printf("\n\t Minimum Element In Given Array => %d",Res);


    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

#define Cnt 5

int main()
{
    int Num[Cnt]={0},i,Srce;

    for(i = 0;i < Cnt;i++)
    {
        printf("\n\t Enter Element %d => ",i+1);
        scanf("%d",&Num[i]);
    }

    printf("\n\t Enter Element For Searching => ");
    scanf("%d",&Srce);

    for(i = 0;i < Cnt;i++)
    {
        if(Num[i] == Srce)
        {
            printf("\n\t Given Element Found At %d Index",i);
        }
    }


    getch();
    return 0;
}

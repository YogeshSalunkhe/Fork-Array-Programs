#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
        int Num[size],i,Min;

        for(i = 0; i < size;i++)
        {
            printf("\n\t Enter Element %d => ",i+1);
            scanf("%d",&Num[i]);
        }

        Min=Num[0];

        for(i = 0;i < size;i++)
        {
            if(Num[i] < Min)
            {
                Min=Num[i];
            }
        }

        printf("\n\t Minimum Element In Given Array => %d",Min);

        getch();
        return 0;
}

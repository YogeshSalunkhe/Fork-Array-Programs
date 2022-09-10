#include<stdio.h>
#include<conio.h>

void Check_Even(int Arr[])
{
        int Cnt = 0,i = 0,Min = 0;

        for(Cnt = 0, i = 0 ; Cnt < 5 ; Cnt++)
        {
                if(Arr[Cnt] % 2 == 0)
                {
                        Arr[i] = Arr[Cnt];
                        i++;
                }
        }

        for( Cnt = 0 ; Cnt < i ; Cnt++)
        {
                if()
        }


        return;
}
int main()
{
        int Arr[5]={0},i = 0;

        for(i = 0; i < 5; i++)
        {
                printf("\n\t Enter %d Element => ",i+1);
                scanf("%d",&Arr[i]);
        }

        Check_Even(Arr);

        getch();
        return 0;

}

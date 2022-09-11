#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0, cnt = 0;

        printf("\n Enter Row & Column Count = ");
        scanf("%d",&cnt);           /// 7

        printf("\n Pattern is => \n\n");

        for(r = 1; r <= cnt; r++)
        {
            for(c = 1; c <= cnt; c++)
            {
                if(c != 1&& r == 1 ||((c == 1) && (r < (cnt+1)/2))&& r != 1||r == (cnt + 1)/2 && c != 1 && c != cnt|| c == cnt && r > (cnt + 1)/2 && r != cnt|| c != cnt&& r == cnt )
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }

        getch();
        return 0;
}

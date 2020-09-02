#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int num, loop1, loop2;
    scanf("%d", &num);

    if (num < 1 || num>100)
    {
        printf("ERROR");
    }
    else
    {
        for (loop1 = 0; loop1 < num; loop1++)
        {
            for (loop2 = 0; loop2 < num; loop2++)
            {
                if (loop1 == 0 || loop1 == num - 1 || loop2 == 0 || loop2 == num - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }

            }
            printf("\n");
        }
    }

    return 0;
}

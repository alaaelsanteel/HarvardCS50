#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int hight;
    do
    {
        hight = get_int("Hight: ");
    }
    while (hight > 8 || hight < 1);
    for (int i = 1; i <= hight; i++)
    {
        for (int j = 0; j < hight - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int z = 0; z < i; z++)
        {
            printf("#");
        }
        printf("\n");
    }
}
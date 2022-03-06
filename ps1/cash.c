#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    float change ;
    do
    {
        change = get_float("Chande Owed: ");
    }
    while (change < 0);
    int dollers = round(change *  100);
    int coins = 0;
    while (dollers > 0)
    {
        if (dollers >= 25)
        {
            dollers -= 25;
            coins ++;
        }
        if (dollers >= 10 && dollers < 25)
        {
            dollers -= 10;
            coins ++;
        }
        if (dollers >= 5 && dollers < 10)
        {
            dollers -= 5;
            coins ++;
        }
        if (dollers >= 1 && dollers < 5)
        {
            dollers -= 1;
            coins ++;
        }
    }
    printf("%i\n", coins);

}
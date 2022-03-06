#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(void)
{
    string ss = get_string("Text: ");
    int sentence = 0, word = 1, letter = 0;
    int n = strlen(ss);
    for (int i = 0; i < n; i++)
    {
        if (ss[i] == ' ')
        {
            word++;
        }
          

        if (ss[i] == '.' || ss[i] == '!' || ss[i] == '?')
        {
            sentence++;
        }
        

        if (isalpha(ss[i]))
        {
            letter++;
        }
       

    }
    float l = ((float)letter / (float)word) * 100;
    float s = ((float)sentence / (float)word) * 100;
    int indx = round(0.0588 * l - 0.296 * s - 15.8);
    if (indx > 16)
    {
        printf("Grade 16+\n");
    }
   
    else if (indx < 1)
    {
        printf("Before Grade 1\n");
    }

    else
    {
        printf("Grade %i\n", indx);
    }
}
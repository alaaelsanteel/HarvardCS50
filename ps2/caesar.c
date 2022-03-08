#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //if we have two arguments
    if (argc == 2)
    {
        string ss = argv[1];
        // enshuring that the number is positive
        
        for (int i = 0; i < strlen(ss); i++)
        {
            if (!isdigit(ss[i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        
        string s = get_string("plaintext: ");
        int key = atoi(argv[1]);
        printf("ciphertext: ");
        
        for (int i = 0; i < strlen(s) ; i++)
        {
            if (isupper(s[i]))
            {
                printf("%c", (((s[i] - 'A') + key) % 26) + 'A');
            }
            else if (islower(s[i]))
            {
                printf("%c", (((s[i] - 'a') + key) % 26) + 'a');
            }
            else
            {
                printf("%c", s[i]);
            }
            
        }
       
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;

    }
}
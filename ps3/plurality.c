#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 9
//each of the candidates have a name and the number of votes they got
typedef struct
{
    string name;
    int votes;
}
candidate;
//array of candidate
candidate candidates [MAX];
 
//the global variabel represinting the number of candidates
int candidate_count;
  
/////////////////////////
//calculating the numbet of votes

bool vote(string  name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}
/////////////////////////
//Display the winners

void print_winner(void)
{
    int maxi = 0;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > maxi)
        {
            maxi = candidates[i].votes;
        }
    }
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == maxi)
        {
            printf("%s\n", candidates[i].name);
        }
    }
    return;
      
}
////////////////////////////
  
int main(int argc, string argv[])
{
    
    candidate_count = argc - 1;
/////////////////////////

    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }
  
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 1;
    }
//////////////////////////
  
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv [i + 1];
        candidates[i].votes = 0;
    }
    int voters = get_int("Number of voters: ");
    for (int i = 0; i < voters; i++)
    {
        string name = get_string("Vote: ");
        
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }
    
    print_winner();
        
  
 
  
}
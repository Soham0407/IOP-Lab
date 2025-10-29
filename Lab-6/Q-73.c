#include <stdio.h>
int main() 
{
    int count[5] = {0};  // Store no. of votes 
    int spoiltBallots = 0;  // To count the spoilt ballots
    int vote, totalVotes;

    printf("Enter the total number of votes: ");
    scanf("%d", &totalVotes);
    printf("Enter vote,candidate number 1-5 any other will be considered spoilt ballot: ");
    for (int i = 0;i<totalVotes;i++) 
    {
        scanf("%d", &vote);
        if (vote >= 1 && vote <= 5) 
        {
            count[vote-1]++;  // Increment the vote for the valid candidate
        } 
        else 
        spoiltBallots++;  // Increment the spoilt ballot count
    }
    printf("\nVote Count:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Candidate %d: %d votes\n", i + 1, count[i]);
    }
    printf("Number of spoilt ballots: %d\n", spoiltBallots);
    return 0;
}

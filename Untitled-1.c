#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 0;
    int playerTurn = 1;

    printf("Enter a string representing the cards played: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'U')
        {
            count++;
        }
        else if (str[i] == 'R')
        {
            count += 2;
            playerTurn = (playerTurn + 1) % 3 + 1; // Change player turn to the next one
        }
        else if (str[i] == 'S')
        {
            count -= 1;
            playerTurn = (playerTurn + 1) % 3 + 1; // Change player turn to the next one
        }

        // Check if the count reaches 0
        if (count == 0)
        {
            printf("Player %d wins!\n", playerTurn);
            break;
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int heads = 0;
    int tails = 0;
    char name[100];

    printf("Who are you?\n");
    scanf("%99s", name);

    printf("Hello, %s!\n", name);

    srand(time(NULL));

    printf("Tossing a coin...\n");

    for (int i = 1; i <= 3; i++)
    {
        int coin = rand() % 2;

        if (coin == 0)
        {
            printf("Round %d: Heads\n", i);
            heads++;
        }
        else
        {
            printf("Round %d: Tails\n", i);
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);

    return 0;
}
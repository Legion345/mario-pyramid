#include <stdio.h>

int main(void)
{
    int block;
    do
    {
         printf("Enter Height: ");
         scanf("%d", &block);
    }
    while (block < 1 ||  block > 8);

    for (int rows = 0; rows < block; rows++)
    {
        for (int spaces = 0; spaces < block - rows - 1; spaces++)
        {
            printf(" ");
        }
        for (int columns = 0; columns <= rows; columns++)
        {
            printf("#");
        }
        printf("  ");

        for (int columns = 0; columns <= rows; columns++)
        {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}
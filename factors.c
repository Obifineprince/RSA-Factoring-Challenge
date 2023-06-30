#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 on success, 1 on error
 */
int main(void)
{
    FILE *fp;
    char filename[100];
    int num;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: could not open file\n");
        return (1);
    }

    while (fscanf(fp, "%d", &num) != EOF)
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                printf("%d=%d*%d\n", num, i, num / i);
                break;
            }
        }
    }

    fclose(fp);
    return (0);
}


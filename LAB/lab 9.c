#include <stdio.h>

int main()
{
    int num;

    FILE *fp = fopen("Students.json", "w");

    if (fp == NULL)
    {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    while (1)
    {
        printf("Enter number(-1 to stop): ");
        scanf("%d", &num);

        if (num == -1)
        {
            break;
        }

        if (num >= 10 && num <= 20)
        {
            fprintf(fp, "%d\n", num);
        }
    }

    fclose(fp);

    // Άνοιγμα αρχείου για ανάγνωση
    fp = fopen("askisi1.txt", "r");

    if (fp == NULL)
    {
        printf("Error: Cannot open file for reading!\n");
        return 1;
    }

    printf("\nContent of askisi1.txt:\n");

    while (fscanf(fp, "%d", &num) != EOF)
    {
        printf("%d\n", num);
    }

    fclose(fp);

    return 0;
}
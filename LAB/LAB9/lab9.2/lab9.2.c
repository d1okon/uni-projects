#include <stdio.h>
#include <string.h>

int main()
{
    char filename[50];
    char choice;
    FILE *fp;

    while (1)
    {
        printf("Enter filename: ");
        scanf("%s", filename);

        // Έλεγχος αν υπάρχει
        fp = fopen(filename, "r");

        if (fp == NULL)
        {
            // Δεν υπάρχει -> δημιουργία
            fp = fopen(filename, "w");
            fprintf(fp, "One\n");
            fclose(fp);
            printf("The file was created and the word One was written.\n");
            break;
        }
        else
        {
            fclose(fp);

            printf("The file exists. Do you want to overwrite it? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y')
            {
                fp = fopen(filename, "w");
                fprintf(fp, "One\n");
                fclose(fp);
                printf("The file was overwritten and the word One was written.\n");
                break;
            }
            else
            {
                printf("Enter a new filename.\n");
            }
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char filename[50], str[50], openFile[50];
    int i, count;
    printf("Enter name of the text file: ");
    gets(filename);
    fp = fopen(filename, "a");
    if (fp == NULL)
    {
        printf("Error: File can’t be created\n");
        return 0;
    }
    count = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter text: ");
        gets(str);
        if (str[0] == 'z')
        {
            count++;
            fprintf(fp, str);
            fprintf(fp, "\n");
        }
    }
    printf("\n%d strings were written in file %s.\n", count, filename);
    fclose(fp);
    sprintf(openFile, "notepad %s", filename);
    system(openFile);
    return 0;
}
\#include <stdio.h>

\#include <stdlib.h>

int main()

{

&#x20;   FILE \*fp;

&#x20;   char filename\[50], str\[50], openFile\[50];

&#x20;   int i, count;

&#x20;   printf("Enter name of the text file: ");

&#x20;   gets(filename);

&#x20;   fp = fopen(filename, "a");

&#x20;   if (fp == NULL)

&#x20;   {

&#x20;       printf("Error: File can’t be created\\n");

&#x20;       return 0;

&#x20;   }

&#x20;   count = 0;

&#x20;   for (i = 0; i < 5; i++)

&#x20;   {

&#x20;       printf("Enter text: ");

&#x20;       gets(str);

&#x20;       if (str\[0] == 'z')

&#x20;       {

&#x20;           count++;

&#x20;           fprintf(fp, str);

&#x20;           fprintf(fp, "\\n");

&#x20;       }

&#x20;   }

&#x20;   printf("\\n%d strings were written in file %s.\\n", count, filename);

&#x20;   fclose(fp);

&#x20;   sprintf(openFile, "notepad %s", filename);

&#x20;   system(openFile);

&#x20;   return 0;

}


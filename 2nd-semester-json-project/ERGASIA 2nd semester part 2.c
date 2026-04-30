#include <stdio.h>

int main()
{
    FILE *in = fopen("Students.json", "r");  // OPENING THE FILE WE CREATED IN THE FIRST PART
    FILE *out = fopen("minified.json", "w"); // OPENING A NEW FILE TO WRITE THE MINIFIED VERSION OF THE JSON

    if (in == NULL || out == NULL) // CHECKING IF THE FILES WERE OPENED SUCCESSFULLY
    {
        printf("Error! file not found\n");
        return 1;
    }

    int c;
    int inside_string = 0; // VARIABLE TO TRACK WHETHER WE ARE INSIDE A STRING
    int escape = 0;        // VARIABLE (0/1) 0 FOR NORMAL, 1 FOR ESCAPE SEQUENCE SO IT DOESN'T CONFUSE US WITH THE QUOTE MARKS INSIDE STRINGS

    while ((c = fgetc(in)) != EOF) // READING THE FILE CHARACTER BY CHARACTER
    {

        if (inside_string)
        {
            fputc(c, out); // IF WE ARE INSIDE A STRING, WE WRITE THE CHARACTER TO THE OUTPUT FILE WITHOUT ANY CHECKS

            if (escape) // WE RESET ESCAPE BACK TO 0 IF IT WAS 1, BECAUSE THE NEXT CHARACTER AFTER AN ESCAPE SEQUENCE IS NOT PART OF THE STRING
            {
                escape = 0;
            }
            else if (c == '\\') // IF WE ENCOUNTER A BACKSLASH, WE SET ESCAPE TO 1 TO INDICATE THAT THE NEXT CHARACTER IS PART OF AN ESCAPE SEQUENCE
            {
                escape = 1;
            }
            else if (c == '"') // IF WE ENCOUNTER A QUOTE, WE ARE NO LONGER INSIDE A STRING
            {
                inside_string = 0;
            }
        }
        else
        {
            if (c == '"') // IF WE ENCOUNTER A QUOTE AND WE ARE NOT ALREADY INSIDE A STRING, WE START A NEW STRING
            {
                inside_string = 1;
                fputc(c, out);
            }
            else if (c != ' ' && c != '\n' && c != '\t' && c != '\r') // IF WE ARE NOT INSIDE A STRING WE IGNORE UNWANTED CHARACTERS
            {
                fputc(c, out);
            }
        }
    }

    fclose(in);
    fclose(out);

    printf("Done! Check minified.json\n");
    return 0;
}
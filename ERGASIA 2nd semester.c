typedef struct
{
    char name[100]; // STUDENTS' STRUCT
    int age;
    float grade;

} STUDENTS;

#include <stdio.h>

int main()
{

    STUDENTS s[3]; // STARTS REP FOR STUDENTS' INFO INPUT

    int i;

    for (i = 0; i < 3; i++)
    {

        printf("Student %d\n ", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter age: ");
        scanf("%d", &s[i].age);
        getchar(); // CLEARS NEW LINE

        do
        {

            printf("Enter grade(0-10): ");
            scanf("%f", &s[i].grade);

        } while (s[i].grade < 0 || s[i].grade > 10);

        printf("\n");
    }

    FILE *fp = fopen("Students.json", "w"); // FROM NOW ON EVERYTHING IS BEING WRITTEN ON THE FILE

    if (fp == NULL) // WE CHECK THAT WE CAN FIND AND OPEN THE FILE
    {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    fprintf(fp, "{\n"); // CREATING THE JSON FORMAT/STRACTURE
    fprintf(fp, "  \"students\": [\n");

    for (i = 0; i < 3; i++)
    {

        fprintf(fp, "    {\n");
        fprintf(fp, "      \"name\": \"%s\",\n", s[i].name);
        fprintf(fp, "      \"age\": %d,\n", s[i].age);
        fprintf(fp, "      \"grade\": %.1f\n", s[i].grade);
        fprintf(fp, "    }");

        if (i < 2)
        { // TO PUT COMA ONLY ON 1ST AND 2ND REP
            fprintf(fp, ",");
        }

        fprintf(fp, "\n");
    }

    fprintf(fp, "  ]\n");
    fprintf(fp, "}\n");

    return 0;
}
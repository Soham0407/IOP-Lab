//PROGRAM TO CREATE A FILE “LNMIITSTUDENT.JAVA” TO STORE DETAILS OF N STUDENTS. 
#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int rollno, age, n, i;

    file = fopen("LNMIITSTUDENT.JAVA", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
    }
    else
    {
        printf("Enter the number of students: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("Enter details for student %d:\n", i + 1);
            printf("Name: ");
            scanf("%s", name);
            printf("Roll Number: ");
            scanf("%d", &rollno);
            printf("Age: ");
            scanf("%d", &age);

            fprintf(file, "Student %d:\n", i + 1);
            fprintf(file, "Name: %s\n", name);
            fprintf(file, "Roll Number: %d\n", rollno);
            fprintf(file, "Age: %d\n\n", age);
        }
    }
    fclose(file);
    return 0;
}
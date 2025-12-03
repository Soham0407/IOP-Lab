//PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.
#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int rollno, age;
    file = fopen("LNMIITSTUDENT.DAT", "a");
    if (file == NULL)
    {
        printf("Error opening file.\n");
    }
    else
    {
        printf("Enter student details to append:\n");
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &rollno);
        printf("Age: ");
        scanf("%d", &age);

        fprintf(file, "Name: %s\n", name);
        fprintf(file, "Roll Number: %d\n", rollno);
        fprintf(file, "Age: %d\n", age);
    }
  
}
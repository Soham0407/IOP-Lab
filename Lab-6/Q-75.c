#include <stdio.h>

int main()
{
    int roll[10];
    int marks[10][3]; // 10 students, 3 subjects
    int total[10];
    int highest_marks[3] = {0, 0, 0};
    int topper_marks[3];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        printf("Enter Roll No. and marks of 3 subjects for student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &roll[i]);

        printf("Subject 1, 2, 3 marks: ");
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    // Calculate total and track highest in each subject
    int max_total = 0, topper_index = 0;

    for (i = 0; i < 10; i++)
    {
        total[i] = 0;

        for (j = 0; j < 3; j++)
        {
            total[i] += marks[i][j];

            if (marks[i][j] > highest_marks[j])
            {
                highest_marks[j] = marks[i][j];
                topper_marks[j] = roll[i];
            }
        }

        if (total[i] > max_total)
        {
            max_total = total[i];
            topper_index = i;
        }
        
    }

    //Total marks by each student
    printf("\nTotal Marks of Each Student:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Roll No. %d: Total = %d\n", roll[i], total[i]);
    }

    //Highest marks in each subject
    printf("\nHighest Marks in Each Subject:\n");
    for (j = 0; j < 3; j++)
    {
        printf("Subject %d: %d (by Roll No. %d)\n", j + 1, highest_marks[j], topper_marks[j]);
    }

    //Student with highest total
    printf("\nTopper Overall:\n");
    printf("Roll No. %d with total marks = %d\n", roll[topper_index], total[topper_index]);

    return 0;
}
//PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER ,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE.
//DECLARE  A STRUCTURE POINTER AND AN ARRAY EMPLOY WITH 50 ELEMENTS
#include<stdio.h>
#include<string.h>
typedef struct
    {
        char eply_name[100];
        int eply_no;
        float eply_pay;
    } employ;

int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    employ data[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter employ name: ");
        getchar(); 
        gets(data[i].eply_name);
        printf("Enter eployee code: ");
        scanf("%d", &data[i].eply_no);
        printf("Enter basic pay: ");
        scanf("%f", &data[i].eply_pay);
    }
    printf("Employee Details:\n");
    for(int i=0; i<n; i++)
    {
        printf("%s\t%d\t%f\n", data[i].eply_name, data[i].eply_no, data[i].eply_pay);
    }
}
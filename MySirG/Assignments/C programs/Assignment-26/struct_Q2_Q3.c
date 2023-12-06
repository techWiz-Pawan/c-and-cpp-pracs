#include<stdio.h>
#include<string.h>

struct Employee
        {
            int emp_id;
            char name[30];
            float salary;
        };

struct Employee inputData()
        {
            struct Employee b1;

            printf("Collecting info from user...\n");
            printf("Enter employee ID: ");
            scanf("%d", &b1.emp_id);
            printf("Enter employee name: ");
            fflush(stdin);
            fgets(b1.name, 30, stdin);
            b1.name[strlen(b1.name)-1] = '\0';

            printf("Enter employee salary: ");
            scanf("%f", &b1.salary);

            return b1;
        }

void displayEmployee(struct Employee b1)
        {
            printf("Enter employee salary: ");
            scanf("%f", &b1.salary);

            printf("\nUser have entered: \n");
            printf("employee ID: %d\n", b1.emp_id);
            printf("Your name: %s\n", b1.name);
            printf("Salary: ₹ %f", b1.salary);
        }

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        
        struct Employee b1 = inputData();
        displayEmployee(b1);

    printf("\n");
    return 0;
}

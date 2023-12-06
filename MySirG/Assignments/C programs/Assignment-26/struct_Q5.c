#include<stdio.h>
#include<string.h>
#define SIZE 3
struct employ
{
    int emp_id;
    char name[30];
    float salary;
}emp[SIZE];

void sort_employ_salary(struct employ emp[]);
void sort_employ_salary(struct employ emp[])
{
    int i, j, temp;
    for ( i = 0; i < SIZE; i++)
    {
        for ( j = i+1; j < SIZE; j++)
        {
            if(emp[i].salary > emp[j].salary)
            {
                temp = emp[i].salary;
                emp[i].salary = emp[j].salary;
                emp[j].salary = temp;
            }
        }
        
    }
    
    printf("Employee salaries in sorted order: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%f  ", emp[i].salary);
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int i;
        for (i = 0; i < SIZE; i++)
        {
            printf("Enter employee ID: ");
            scanf("%d", &emp[i].emp_id);

            fflush(stdin);
            printf("Enter employee name: ");
            fgets(emp[i].name, 30, stdin);
            emp[i].name[strlen(emp[i].name)-1] = '\0';

            printf("Enter employee salary: ");
            scanf("%f", &emp[i].salary);
            printf("\n");
        }
        
        sort_employ_salary(emp);

        
        

    printf("\n");
    return 0;
}

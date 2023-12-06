#include<stdio.h>
#include<string.h>
#define SIZE 3

struct salaries
{
    int emp_id;
    char name[30];
    float salary;
}emp[SIZE];

float Highest_salary(struct salaries emp[], int size);

float Highest_salary(struct salaries emp[], int size)
{
    int max = emp[0].salary;
    for (int i = 0; i < size; i++)
    {
        if(max < emp[i].salary)
            max = emp[i].salary;
    }
    
    return max;

}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        struct salaries emp[SIZE];
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
        
        float result = Highest_salary(emp, SIZE);
        printf("The highest salary: %f", result);

    printf("\n");
    return 0;
}

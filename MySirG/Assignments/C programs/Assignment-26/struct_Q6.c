#include<stdio.h>
#include<string.h>
#define SIZE 3

struct employ
{
    int emp_id;
    char name[30];
    float salary;
}emp[SIZE];

void swap_strings(char str1[], char str2[]);
void sort_emp_name(struct employ emp[]);

void swap_strings(char str1[], char str2[])
{
    char temp[30];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void sort_emp_name(struct employ emp[])
{
    int i, j;
    for ( i = 0; i < SIZE - 1; i++)
    {
        for ( j = i+1; j < SIZE; j++)
        {
            if (strcmp(emp[i].name, emp[j].name) > 0)
            {
                swap_strings(emp[i].name, emp[j].name);
            }
            
        }
        
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s  ", emp[i].name);
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

            while (getchar() != '\n');  // Clearing input buffer
            printf("Enter employee name: ");
            fgets(emp[i].name, 30, stdin);
            emp[i].name[strlen(emp[i].name)-1] = '\0';

            printf("Enter employee salary: ");
            scanf("%f", &emp[i].salary);
            printf("\n");
        }

        sort_emp_name(emp);
        

    printf("\n");
    return 0;
}

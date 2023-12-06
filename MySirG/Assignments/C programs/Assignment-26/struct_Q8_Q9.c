#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[25];

};
void display_student_info(struct student s[], int N_stu);
void input_student_info(struct student s[], int N_stu);

void input_student_info(struct student s[], int N_stu)
{
    int i;
    for ( i = 0; i < N_stu; i++)
    {
        printf("Enter student rollno: ");
        scanf("%d", &s[i].rollno);

        while (getchar() != '\n');  // Clearing input buffer
        printf("Enter student name: ");
        fgets(s[i].name, 25, stdin);
        s[i].name[strlen(s[i].name)-1] = '\0';
        printf("\n");
    }
}

void display_student_info(struct student s[], int N_stu)
{
    
    for (int i = 0; i < N_stu; i++)
    {
        printf("rollNo: %d | name: %s\n\n", s[i].rollno, s[i].name);
    }
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int N_stu;
        printf("Enter the number of students: ");
        scanf("%d", &N_stu);

        struct student s[N_stu];
        input_student_info(s, N_stu);
        display_student_info(s, N_stu);

    printf("\n");
    return 0;
}

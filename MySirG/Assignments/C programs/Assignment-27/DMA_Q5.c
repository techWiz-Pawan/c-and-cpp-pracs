#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char name[30];
    int rollno;
    char clg_name[100];
};

struct team
{
    struct student stu1;
    struct student stu2;
};

struct student* newStudent(char name[], int roll, char clg[])
{
    struct student *stu;
    stu = (struct student*)malloc(sizeof(struct student));

    strcpy(stu->name, name);
    stu->rollno = roll;
    strcpy(stu->clg_name, clg);

    return stu;
}

struct team* newTeam(struct student x, struct student y)
{
    struct team* stu;
    stu = (struct team*)malloc(sizeof(struct team));
    stu->stu1 = x;
    stu->stu2 = y;

    return stu;
}

void displayStudent(struct student s)
{
    printf("\n%s\n\n%d\n\n%s", s.name, s.rollno, s.clg_name);
}

void displayTeam(struct team t)
{
    printf("\nTeam: \n");
    displayStudent(t.stu1);
    displayStudent(t.stu2);
}

struct student** createStudentArray(int size)
{
    struct student **ptr;
    ptr = (struct student**)malloc(size * sizeof(struct student*));

    return ptr;
}

struct team** createTeamArray(int size)
{
    struct team **ptr;
    ptr = (struct team**)malloc(size * sizeof(struct team*));

    return ptr;
}

void driverFunction()
{

}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        driverFunction();
        

    printf("\n");
    return 0;
}

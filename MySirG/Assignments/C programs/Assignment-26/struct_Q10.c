

/// HOLD


#include <stdio.h>
#include <string.h>

#define SIZE 5

struct student
{
    int rollNo;
    char name[30];
};

struct marks
{
    struct student stu;
    int chem_marks, math_marks, phy_marks;
};

struct student inputStudentData()
{
    struct student s;
    printf("\nEnter Student roll number: ");
    scanf("%d", &s.rollNo);

    fflush(stdin);
    printf("\nEnter Student name: ");
    fgets(s.name, 30, stdin);
    s.name[strlen(s.name) - 1] = '\0';
    return s;
}

struct marks setMarks(struct student s, int c, int m, int p)
{
    struct marks m1;
    m1.stu = s;
    m1.chem_marks = c;
    m1.math_marks = m;
    m1.phy_marks = p;
    return m1;
}

void printPercentage(struct marks m)
{
    float per;
    per = (m.chem_marks + m.math_marks + m.phy_marks) / 3.0;
    printf("\n%d %s Percentage = %0.2f%%", m.stu.rollNo, m.stu.name, per);
}

int main()
{
    struct student s[10];
    s[0] = inputStudentData();      // s.roll  s.name
    s[1] = inputStudentData();
    s[2] = inputStudentData();
    s[3] = inputStudentData();
    s[4] = inputStudentData();
    
    printf("\n");

    struct marks m[5];
    m[0] = setMarks(s[0], 71, 89, 60);
    m[1] = setMarks(s[1], 61, 90, 90);
    m[2] = setMarks(s[2], 65, 56, 40);
    m[3] = setMarks(s[3], 25, 57, 63);
    m[4] = setMarks(s[4], 1, 9, 0);

    int i;
    for (i = 0; i <= 4; i++)
        printPercentage(m[i]);

    printf("\n");
    return 0;
}

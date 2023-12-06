#include<stdio.h>
#include<stdlib.h>
#define one_USD_in_rs 82.91

void fun_basic_Q();
void fun_ass3_Q3();
void fun_ass3_Q4();
void fun_ass3_Q5();
void fun_ass4_Q1();
void fun_ass4_Q4();
void fun_ass4_Q5();
void fun_ass4_Q6();
void fun_ass4_Q7();
void fun_ass4_Q8();
void fun_ass5_Q4();
void fun_ass5_Q6();
void fun_ass5_Q9();
void fun_ass7_Q2();
void fun_ass7_Q4();
void fun_ass7_Q8();
void fun_ass7_Q10();
void fun_ass9_Q1();
void fun_ass9_Q2();
void fun_ass9_Q7();
void fun_ass9_Q8();
void fun_ass9_Q9();
void fun_ass9_Q10();
void fun_ass10_Q1();
void fun_ass10_Q3();
void fun_ass10_Q4();
void fun_ass10_Q5();
void fun_ass10_Q6();
void fun_ass10_Q8();
void fun_ass10_Q9();
void fun_ass10_Q10();
void fun_ass12_Q1();
void fun_ass12_Q3();
void fun_ass12_Q4();
void fun_ass12_Q7();
void fun_ass12_Q5();
void fun_ass12_Q6();
void fun_ass12_Q8();
void fun_ass12_Q9();
void fun_ass13_Q1();
void fun_ass13_Q2();
void fun_ass13_Q4();
// void fun_ass13_Q7();

void fun_basic_Q()      // 0
{
    int size = sizeof(long long int);
    printf("The size of int is %d", size);
    
}

void fun_ass3_Q3()      // 1
{
    int ch = 'A';
    printf("My first character = %c\n", ch);
    ch++;
    printf("My character after '++' = %c", ch);
}

void fun_ass3_Q4()      // 2
{
    int num = 1234;
    printf("The unit digit of a given number is %d", num%10);
}

void fun_ass3_Q5()      // 3
{
    // swap two number
    int n1 = 6, n2 = 9;
    printf("Before swap: %d and %d\n", n1, n2);
    // n2 = n1 + n2;
    // n1 = n2 - n1;
    // n2 = n2 - n1;

    n2 = n1 * n2;
    n1 = n2 / n1;
    n2 = n2 / n1;

    // n2 = n1 ^ n2;
    // n1 = n1 ^ n2;
    // n2 = n1 ^ n2;

    // n2 = (n1 + n2) - (n1 = n2);

    printf("After swap: %d and %d", n1, n2);
}

void fun_ass4_Q1()      // 4
{
    int num = 123, sum=0;
    int x = num;
    while (num != 0)
    {
        sum += num%10;
        num = num / 10;
    }
    printf("The sum of given digit %d is %d", x, sum);
}

void fun_ass4_Q4()      // 5
{
    int num = 1234, rem;
    rem = num%10;
    num = num - rem;

    printf("The last digit changes to zero : %d", num);
}

void fun_ass4_Q5()      // 6
{
    int num = 123, digi = 9;
    int append = (num*10) + digi;

    printf("The result after append: %d", append);
}

void fun_ass4_Q6()      // 7
{
    float rupees = 8000;
    printf("The given rupees in USD : %f", rupees/one_USD_in_rs);

}

void fun_ass4_Q7()      // 8
{
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    int lastDigit = num % 10;             // Extracting the last digit
    int remainingDigits = num / 10;       // Extracting the remaining two digits
    int rotatedNum = (lastDigit * 100) + remainingDigits;   // Rotating the digits

    printf("Rotated number: %d\n", rotatedNum);
    
}

void fun_ass4_Q8()      // 9
{
    int x = 10 > 8 > 4;
    // int y = !2>-2;
    int z = 3 < 0 && 5 > 0;

    printf("After exection: %d\n", x);
    // printf("After exection: %d\n", y);
    printf("After exection: %d\n", z);
}

void fun_ass5_Q4()      // 10
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    //METHOD 1
    // if((num / 2) * 2 != num)
    // {
    //     printf("ODD");
    // }
    // else
    //     printf("EVEN");

    //METHOD 2
    if((num & 1) != 0)
    {
        printf("ODD");
    }
    else
        printf("EVEN");
}

void fun_ass5_Q6()      // 11
{
    int num = 100;
    if(num > 99 && num < 1000)
    {
        printf("It is Three digit number");
    }
    else
        printf("Not a three digit number ");
}

void fun_ass5_Q9()      // 12
{
    int year;
    printf("\nEnter a year: ");
    scanf("%d", &year);

    if(year%100 == 0)
    {
        if(year%400 == 0)
            printf("Leap year");
        else
            printf("Not a leap year");
    }
    else if (year%4 == 0)
    {
        printf("Leap year");
    }
    else
        printf("Not a Leap year");
     
}

void fun_ass7_Q2()      // 13
{
    int num, i=1;
    printf("Enter the nth number: ");
    scanf("%d", &num);

    while(num >= i)
    {
        printf("%d\n", num);
        num--;
        
    }
}

void fun_ass7_Q4()      // 14
{
    int num, i=1;
    printf("Enter the nth number: ");
    scanf("%d", &num);

    while(num >= i)
    {
        if(num%2 != 0)
        {
            printf("%d\n", num);
        }
        num--;
    }

}

void fun_ass7_Q8()      // 15
{
    int num, i=1;
    printf("Enter the nth number: ");
    scanf("%d", &num);

    while(i <= num)
    {
        printf("%d\n", i*i);
        i++;
    }
}

void fun_ass7_Q10()     // 16
{
    int num, i=1, n=5;
    printf("Enter the nth number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    
}

void fun_ass9_Q1()      // 17
{
    int num, i=1, sum=0;
    printf("Enter the nth number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        sum += i;
        i++;
    }
    printf("The sum of %d is %d", num, sum);
    

}

void fun_ass9_Q2()      // 18
{
    int num, i=1, sum=0;
    printf("Enter the nth number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        if(i%2 == 0)
        {
            sum += i;
        }
        i++;
    }
    printf("The sum of %dth even number: %d", num, sum);
    
}

void fun_ass9_Q7()      // 19
{
    int num = 64767655, cnt = 0;
    while (num != 0)
    {
        num /= 10;
        cnt++; 
    }
    printf("The number of digit in a given number: %d", cnt);
    
}

void fun_ass9_Q8()      // 20
{
    int num, i=1, cnt=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        if(num%i == 0)
        {
            cnt++;
        }
        i++;
    }
    if(cnt == 2)
        printf("Prime number");
    else
        printf("NOT Prime number");
}

void fun_ass9_Q9()      // 21
{
    int n1 = 4, n2 = 6, max;
    (n1 > n2) ? (max = n1) : (max = n2);

    while (1)       // (or)  while(max <= n1*n2)
    {
        if (max%n1 == 0 && max%n2 == 0)
        {
            printf("The LCM of %d and %d is %d", n1, n2, max);
            break;
        }
        max++;
    }
    
}

void fun_ass9_Q10()     // 22
{
    int num = 123, rem;

    while (num != 0)
    {
        rem = num%10;
        printf("%d", rem);
        num = num/10;
    }
    
}

void fun_ass10_Q1()     // 23
{
    int n1 = -1, n2 = 1, sum, num;
    printf("Enter the nth number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num ; i++)
    {
        sum = n1+n2;
        n1 = n2;
        n2 = sum;
    }
    printf("The %dth term of fibbo is %d", num, sum);
    
}

void fun_ass10_Q3()     // 24
{
    int check_num;
    printf("Enter the number: ");
    scanf("%d", &check_num);

    int n1 = -1, n2 = 1, nxt_n;
    for (int i = 1; ; i++)
    {
        nxt_n = n1+n2;
        if (nxt_n <= check_num)
        {
            if(check_num == nxt_n)  
            {
                printf("%d is present in fibbo", check_num);
                break;
            }
        }
        else
        {
            printf("%d is not present in fibbo", check_num);
            break;
        }
        
        n1 = n2;
        n2 = nxt_n;
    }
    
}

void fun_ass10_Q4()     // 25
{
    int n1 = 54, n2 = 18, min;
    (n1 < n2) ? (min = n1) : (min = n2);

    while (1)
    {
        if(n1%min == 0 && n2%min == 0)
        {
            printf("HCF of %d and %d = %d", n1, n2, min);
            break;
        }
        min--;
    }
}

void fun_ass10_Q5()     // 26
{
   int n1 = 25, n2 = 21, min;
    (n1 < n2) ? (min = n1) : (min = n2);

    while (1)
    {
        if(n1%min == 0 && n2%min == 0)
        {
            printf("HCF of %d and %d = %d\n", n1, n2, min);
            break;
        }
        min--;
    }
    if(min == 1)
        printf("%d and %d are coprime", n1, n2);
    else    
        printf("%d and %d are NOT coprime", n1, n2);
}

void fun_ass10_Q6()     // 27
{
    int first_num = 50, last_num = 100;

    for (int num = first_num; num <= last_num; num++)
    {
        int i=1, cnt=0;
        while (i <= num)
        {
            if(num%i == 0)
                cnt++;
            i++;
        }
        if(cnt == 2)
            printf("%d ", num);
    }
    
}

void fun_ass10_Q8()     // 28
{
    int given_num = 11;
    for (int num = given_num+1; ; num++)
    {
        int i=1, cnt=0;
        while (i <= num)
        {
            if(num%i == 0)
                cnt++;
            i++;
        }
        if(cnt == 2)
        {
            printf("%d ", num);
            break;
        }
            
    }
    
}

void fun_ass10_Q9()     // 29
{
    int num = 153, store_num, cnt=0, rem, p, sum=0;
    store_num = num;

    while (store_num)
    {
        store_num = store_num / 10;
        cnt++;      // 3
    }

    for ( store_num = num; store_num; store_num = store_num / 10)
    {
        rem = store_num%10;
        p = 1;
        for (int i = 1; i <= cnt; i++)
        {
            p = p*rem;
        }
        sum = sum + p; 
        
    }
    if(sum == num)
        printf("Armstrong");
    else
        printf("NOT Armstrong");
    
}

void fun_ass10_Q10()        // 30
{
    int num, store_num, cnt, rem, p, sum;
    
    for ( num = 1; num <= 1000; num++)
    {
        sum = 0;
        cnt = 0;
        store_num = num;
        while (store_num)
        {
            store_num = store_num / 10;
            cnt++;      // 3
        }

        for ( store_num = num; store_num; store_num = store_num / 10)
        {
            rem = store_num%10;
            p = 1;
            for (int i = 1; i <= cnt; i++)
            {
                p = p*rem;
            }
            sum = sum + p; 
        
        }
        if(sum == num)
            printf("%d ", sum);
        
    }
}

void fun_ass12_Q1()     // 31
{
    int i, j;
    for ( i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= 7; j++)
        {
            if(j >= i && j <= 8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
}

void fun_ass12_Q3()     // 32
{
    int i, j, k;
    for ( i = 1; i <= 5; i++)
    {
        k=1;
        for ( j = 1; j <= 9; j++)
        {
            if(j >= 6-i && j <= 4+i && k)
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}

void fun_ass12_Q4()     // 33
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        k=1;
        for (j= 1; j <= 7; j++)
        {
            if (j >= 5-i && j <= 3+i)
            {
                if(j < 4)  
                {
                    printf("%d", k);
                    k++;
                }
                else
                    {
                        printf("%d", k);
                        k--;
                    }
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
        
    }
    
}

void fun_ass12_Q7()     // 34
{
     int i, j, k, flag;
     for ( i = 1; i <= 5; i++)
     {
        k=1, flag=1;
        for ( j = 1; j <= 9; j++)
        {
            if(j >= 6-i && j<= 4+i && flag)
            {
                printf("%d", k);
                (j < 5) ? k++ : k--;
                flag = 0;
            }
            else
            {
                printf(" ");
                if(j == 5)
                    k--;
                flag = 1;
            }
        }
        printf("\n");
        
     }
     
}

void fun_ass12_Q5()     // 35
{
    int i, j;
    for ( i = 1; i <= 4; i++)
    {
        char k = 'A';
        for ( j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8-i)
            {
                printf("%c", k);
                k++;
            }
            else
                printf(" ");
            
        }
        printf("\n");
        
    }
    
}

void fun_ass12_Q6()     // 36
{
    int i, j;
    for ( i = 1; i <= 4; i++)
    {
        char k = 'A';
        for ( j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8-i)
            {
                printf("%c", k);
                (j < 4) ? k++ : k--;
            }
            else
                printf(" ");
            
        }
        printf("\n");
        
    }
}

void fun_ass12_Q8()     // 37
{
    int i, j;
    for ( i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= 7; j++)
        {
            if(i == 1)
                printf("*");
            else if(j >= 6-i && j <= 2+i)
                    printf(" ");
            else
                printf("*");
        }
        printf("\n");
        
    }
    
}

void fun_ass12_Q9()     // 38
{
    int i, j, k;
    for ( i = 1; i <= 4; i++)
    {
        k = 1;
        for ( j = 1; j <= 7; j++)
        {
            if(j <= 5-i || j >= 3+i)
            {
                printf("%d", k);
                (j < 4) ? (k++) : (k--);
            }
            else
            {
                printf(" ");
                if(j == 4)
                    k--;
            }    
        }
        printf("\n");
        
    }
}

void fun_ass13_Q1()     // 39
{
    int num;
    printf("Enter the month number: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("Jan contain 31 days");
            break;
        case 2:
            printf("Feb contain 28 or 29 days");
            break;
        case 3:
            printf("Mar contain 31 days");
            break;
        case 4:
            printf("Apr contain 30 days");
            break;
        case 5:
            printf("May contain 31 days");
            break;
        case 6:
            printf("Jun contain 30 days");
            break;
        case 7:
            printf("Jul contain 31 days");
            break;
        case 8:
            printf("Aug contain 31 days");
            break;
        case 9:
            printf("Sep contain 30 days");
            break;
        case 10:
            printf("Oct contain 31 days");
            break;
        case 11:
            printf("Nov contain 30 days");
            break;
        case 12:
            printf("Dec contain 31 days");
            break; 
    }
}

void fun_ass13_Q2()     // 40
{
    int select, n1, n2;

    while (1)
    {
        printf("\n\nI can do following operation:- \n");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit\n");

        printf("\nEnter two number: ");
        scanf("%d%d", &n1, &n2);

        printf("\nOk please wait...\n");
        printf("\nMake a choice: ");
        scanf(" %d", &select);
    
        switch (select)
        {
            case 0:
                exit(0);    
            case 1:
                printf("The Addition of %d and %d is %d", n1, n2, n1+n2);
                break;
            case 2:
                printf("The Subtraction of %d and %d is %d", n1, n2, n1-n2);
                break;
            case 3:
                printf("The Multiplication of %d and %d is %d", n1, n2, n1*n2);
                break;
            case 4:
                printf("The Division of %d and %d is %d", n1, n2, n1/n2);
                break;

            default:
                printf("Invalid Option!!!");
                break;
        }
    }
    
    
}

void fun_ass13_Q4()     // 41
{
    int select, n1, n2, n3;

    while (1)
    {
        printf("\n\nI can do following operation:- \n");
        printf("\n1. check isosceles triangle or not");
        printf("\n2. check right angled triangle or not");
        printf("\n3. check equilateral triangle or not");
        printf("\n4. Exit\n");

        printf("\nEnter three number: ");
        scanf("%d%d%d", &n1, &n2, &n3);

        printf("\nOk please wait...\n");
        printf("\nMake a choice: ");
        scanf(" %d", &select);
    
        switch (select)
        {    
            case 1:
                if(n1 == n2 || n2 == n3 || n1 == n3)
                    printf("Given three number proves isosceles triangle");
                else
                    printf("No it is not");
                break;
            case 2:
                if(n1*n1 == n2*n2 + n3*n3 || n2*n2 == n1*n1 + n3*n3 || n3*n3 == n1*n1 + n2*n2)
                    printf("Given three number proves right angled triangle");
                else
                    printf("No it is not");
                break;
            case 3:
                if(n1 == n2 == n2)
                    printf("Given three number proves equilateral triangle");
                else
                    printf("No it is not");
                break;
            case 4:
                exit(0);

            default:
                printf("Invalid Option!!!");
                break;
        }
    }
}



int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int select;
        printf("Select the Question number: ");
        scanf("%d", &select);
        
        switch (select)
        {
        case 1:
            fun_ass3_Q3();
            break;
        case 2:
            fun_ass3_Q4();
            break;
        case 3:
            fun_ass3_Q5();
            break;
        case 4:
            fun_ass4_Q1();
            break;
        case 5:
            fun_ass4_Q4();
            break;
        case 6:
            fun_ass4_Q5();
            break;
        case 7:
            fun_ass4_Q6();
            break;
        case 8:
            fun_ass4_Q7();
            break;
        case 9:
            fun_ass4_Q8();
            break;
        case 10:
            fun_ass5_Q4();
            break;
        case 11:
            fun_ass5_Q6();
            break;
        case 12:
            fun_ass5_Q9();
            break;
        case 13:
            fun_ass7_Q2();
            break;
        case 14:
            fun_ass7_Q4();
            break;
        case 15:
            fun_ass7_Q8();
            break;
        case 16:
            fun_ass7_Q10();
            break;
        case 17:
            fun_ass9_Q1();
            break;
        case 18:
            fun_ass9_Q2();
            break;
        case 19:
            fun_ass9_Q7();
            break;
        case 20:
            fun_ass9_Q8();
            break;
        case 21:
            fun_ass9_Q9();
            break;
        case 22:
            fun_ass9_Q10();
            break;
        case 23:
            fun_ass10_Q1();
            break;
        case 24:
            fun_ass10_Q3();
            break;
        case 25:
            fun_ass10_Q4();
            break;
        case 26:
            fun_ass10_Q5();
            break;
        case 27:
            fun_ass10_Q6();
            break;
        case 28:
            fun_ass10_Q8();
            break;
        case 29:
            fun_ass10_Q9();
            break;
        case 30:
            fun_ass10_Q10();
            break;
        case 31:
            fun_ass12_Q1();
            break;
        case 32:
            fun_ass12_Q3();
            break;
        case 33:
            fun_ass12_Q4();
            break;
        case 34:
            fun_ass12_Q7();
            break;
        case 35:
            fun_ass12_Q5();
            break;
        case 36:
            fun_ass12_Q6();
            break;
        case 37:
            fun_ass12_Q8();
            break;
        case 38:
            fun_ass12_Q9();
            break;
        case 39:
            fun_ass13_Q1();
            break;
        case 40:
            fun_ass13_Q2();
            break;
        case 41:
            fun_ass13_Q4();
            break;
        // case 42:
        //     fun_ass13_Q7();
        //     break;

        default:
            fun_basic_Q();
            break;

        }

    printf("\n");
    return 0;
}


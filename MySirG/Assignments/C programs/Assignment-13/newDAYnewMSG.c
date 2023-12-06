#include<stdio.h>

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        int day;
        printf("which day is today: ");
        scanf("%d", &day);

        switch (day)
        {
        case 1:
            printf("Monday\n");
            printf("Start your week with a positive mindset and believe in yourself.");
            break;
        case 2:
            printf("Tuesday\n");
            printf("Take a moment to appreciate the people around you and the things you have in your life.");
            break;
        case 3:
            printf("Wednesday\n");
            printf("Don't be afraid to try something new and step out of your comfort zone.");
            break;
        case 4:
            printf("Thursday\n");
            printf("Set goals for yourself and work towards achieving them every day.");
            break;
        case 5:
            printf("Friday\n");
            printf("Practice self-care and prioritize your mental and physical well-being.");
            break;
        case 6:
            printf("Saturday\n");
            printf("Be kind to yourself and others, and always choose love and empathy over hate.");
            break;
        case 7:
            printf("Sunday\n");
            printf("Look back on the week and celebrate your accomplishments, big or small. You're doing great!");
            break;
         
        
        default:
            break;
        }
        

    printf("\n");
    return 0;
}
#include<stdio.h>
struct time
{
    int Hour;
    int Min;
    int Sec;
};

void time_period_difference(struct time start_t, struct time stop_t, struct time *diff);
void time_period_difference(struct time start_t, struct time stop_t, struct time *diff)
{
    while (stop_t.Sec > start_t.Sec)
    {
        --start_t.Min;
        start_t.Sec += 60;
    }

    diff->Sec = start_t.Sec - stop_t.Sec;

    while (stop_t.Min > start_t.Min)
    {
        --start_t.Hour;
        start_t.Min += 60;
    }
    diff->Min = start_t.Min - stop_t.Min;
    diff->Hour = start_t.Hour - stop_t.Hour;
    
    
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        struct time start_t, stop_t, diff;

        printf("Enter start time hr:min:sec -> ");
        scanf("%d%d%d", &start_t.Hour, &start_t.Min, &start_t.Sec);
        
        printf("Enter stop time hr:min:sec -> ");
        scanf("%d%d%d", &stop_t.Hour, &stop_t.Min, &stop_t.Sec);

        // Now lets find their difference
        time_period_difference(start_t, stop_t, &diff);  // &diff means allow the function to modify variable "diff"

        printf("\nTime Difference: %d:%d:%d - ", start_t.Hour,
        start_t.Min,
        start_t.Sec);
        printf("%d:%d:%d ", stop_t.Hour,
        stop_t.Min,
        stop_t.Sec);
        printf("= %d:%d:%d\n", diff.Hour,
        diff.Min,
        diff.Sec);


    printf("\n");
    return 0;
}

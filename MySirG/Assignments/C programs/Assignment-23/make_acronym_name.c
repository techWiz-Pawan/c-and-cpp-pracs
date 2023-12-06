#include<stdio.h>
#include<string.h>

int count_num_of_words(char str[])
{
    int i, cnt=0;
    for ( i = 0; str[i]; i++)
    {
        if(str[i] == ' ')
        {
            if(str[i] == str[i+1])
                continue;
            else
                cnt++;
        }
    }
    return cnt+1;
    
}

char* make_acronym_name(char str[])
{
    int i, j, k;
    int count_words = count_num_of_words(str);
    char str_matrix[count_words][50];

    /* This loop is responsible for separating the input string into individual words 
    and storing them in a matrix (two-dimensional character array) called str_matrix. */
    for (i=0, j=0, k=0; str[i] != '\0'; i++, k++)
    {
        if(str[i] != ' ')
            str_matrix[j][k] = str[i];
        else
        {
            str_matrix[j][k] = '\0'; // ye wala word k end me NULL lagata hai
            j++;
            k = -1;     
        }
    }
    /* The str_matrix[j][k] = '\0'; statement is used to mark the end of a word in the 
    corresponding row of the str_matrix array. */
    str_matrix[j][k] = '\0';   // ye wala string ke last word me NULL lagata hai end me 

    /* By setting str[0] to '\0', we ensure that the str character array is empty
     before constructing the acronym. so that we can populate */
     str[0] = '\0';
    /* word_count me 3 word hai aur fir hum k=1 se chalu kar rahe hai kyu ki ek kum 
    word tak karna tha last wala word chodna tha isliye,  */
     for(k=1, i=0; k<count_words; k++, i++)
     {
        /* in above str_matrix[which word, e.g 1st word, 2nd word...][word which letter in this case 1st letter] */
        str[i] = str_matrix[k-1][0]; // only to store accronym
        i++;
        str[i] = ' ';
     }

     /* abb mughe last wala word ko store karna hai matlab 'Tiwari', tho mai usse copy kar
     leta hu accronym ke baad {str+i} use kar k */
     strcpy(str+i,  str_matrix[count_words-1]);  // to store the last word {count_word-1 = last word}
    return str;
}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
        char str[50] = "Ramesh Chand Tiwari";
        printf("Your original string: %s\n", str);

        printf("After construction: %s", make_acronym_name(str));

    printf("\n");
    return 0;
}

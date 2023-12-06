#include<stdio.h>
#include<string.h>

char* insensitive_comparision(char str1[], char str2[])
{
    int i;
	for(i=0; str1[i]; i++)
	{
		if(str1[i] >= 'A' && str1[i] <= 'Z')
			str1[i] = str1[i] + 32;
	}
	for(i=0; str2[i]; i++)
	{
		if(str2[i] >= 'A' && str2[i] <= 'Z')
			str2[i] = str2[i] + 32;
	}
	return str1, str2;

}

int main()
{
    printf("Hi Easy\n");

        /* Start your code here */
		int i;
        char str1[] = "hELLo";
        char str2[] = "HELio"; 

        insensitive_comparision(str1, str2);
		// printf("%s\n%s\n", str1, str2);

		
		for(i=0; str1[i]&&str2[i]; i++);
		if(str1[i] == str2[i])
		{
			printf("the insensitive result = True\n");
		}
		else
			printf("The insensitive result = flase\n");
        

    printf("\n");
    return 0;
}




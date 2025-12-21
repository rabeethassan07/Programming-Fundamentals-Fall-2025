#include<stdio.h>
#include<string.h>
void maxFrequency(char str[])
{
    int freq[256] = {0};
    int max = 0;

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++)
	{
        if (str[i] != ' ')   // ignore spaces
		{
            freq[(unsigned char)str[i]]++;
            if (freq[(unsigned char)str[i]] > max)
			{
                max = freq[(unsigned char)str[i]];
            }
        }
    }

    // Print characters with max frequency
    printf("Maximum frequency: %d\n", max);
    printf("Character(s): ");
    for (int i = 0; i < 256; i++)
	{
        if (freq[i] == max)
		{
            printf("%c ", i);
        }
    }
    printf("\n");
}
int main()
{
    char name[100];
    char courses[300];

    // Input name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Input courses
    printf("Enter courses offered in Fall 2021: ");
    fgets(courses, sizeof(courses), stdin);

    printf("\n--- Name Analysis ---\n");
    maxFrequency(name);

    printf("\n--- Courses Analysis ---\n");
    maxFrequency(courses);
    return 0;
}

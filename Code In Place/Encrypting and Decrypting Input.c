#include<stdio.h>
void encrypt(char text[])
{
    for (int i = 0; text[i] != '\0'; i++)
	{
        if (text[i] >= 'A' && text[i] <= 'Z')
		{
            text[i] = (text[i] - 'A' + 3) % 26 + 'A';
        } 
        else if (text[i] >= 'a' && text[i] <= 'z')
		{
            text[i] = (text[i] - 'a' + 3) % 26 + 'a';
        }
    }
}
void decrypt(char text[])
{
    for (int i = 0; text[i] != '\0'; i++)
	{
        if (text[i] >= 'A' && text[i] <= 'Z')
		{
            text[i] = (text[i] - 'A' - 3 + 26) % 26 + 'A';
        } 
        else if (text[i] >= 'a' && text[i] <= 'z')
		{
            text[i] = (text[i] - 'a' - 3 + 26) % 26 + 'a';
        }
    }
}
int main()
{
    FILE *fp;
    char text[200];

    // Input text
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    // Encrypt text
    encrypt(text);

    // Save encrypted text to file
    fp = fopen("data.txt", "w");
    if (fp == NULL)
	{
        printf("File error!\n");
        return 1;
    }
    fputs(text, fp);
    fclose(fp);

    printf("\nEncrypted text saved to file.\n");

    // Read encrypted text from file
    fp = fopen("data.txt", "r");
    if (fp == NULL)
	{
        printf("File error!\n");
        return 1;
    }
    fgets(text, sizeof(text), fp);
    fclose(fp);

    // Decrypt text
    decrypt(text);

    // Display original text
    printf("\nDecrypted (Original) text:\n%s", text);
    return 0;
}

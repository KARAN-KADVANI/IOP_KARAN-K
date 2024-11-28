#include<stdio.h>
#include<string.h>

int main() 
{
    // Open the file for writing text
    FILE *ptr = fopen("File.txt", "w");
    if (ptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Take input from the user
    char buffer[500];
    printf("Write the content of the file:\n");
    fgets(buffer, sizeof(buffer), stdin);  // Read input from user
    fprintf(ptr, "%s", buffer);  // Write input to the file

    // Close the file after writing
    fclose(ptr);

    // Open the file for reading
    ptr = fopen("File.txt", "r");
    if (ptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read the content of the file into a string
    char string[500];
    fgets(string, sizeof(string), ptr);  // Read the entire content of the file

    // Close the file after reading
    fclose(ptr);

    // Count vowels in the string
    int vowcount = 0;
    int n = strlen(string);
    for (int i = 0; i < n; i++) {
        switch (string[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowcount++;
                break;
        }
    }

    // Print the result
    printf("Number of vowels in the file text are: %d\n", vowcount);

    return 0;
}
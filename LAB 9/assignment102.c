/*
WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.
*/

#include <stdio.h>
#include <ctype.h>

int main() 
{
    FILE *ptr = fopen("D:\\Coding\\VSCODE\\C\\LAB 9\\File 102.txt", "r"); 
    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int ch, charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    while ((ch = fgetc(ptr)) != EOF) {
        charCount++; 

        if (ch == '\n') {
            lineCount++;  
        }

        if (isspace(ch)) {
            if (inWord) {
                wordCount++; 
                inWord = 0;
            }
        } else {
            inWord = 1; 
        }
    }

   
    if (inWord) {
        wordCount++;
    }

    
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    fclose(ptr);

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    return 0;
}



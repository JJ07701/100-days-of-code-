#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(str);  

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];  
        } else {
            word[j] = '\0';  
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);  
            }
            j = 0;  
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("The longest word is: %s\n", longest);
    printf("Length of the longest word: %d\n", maxLen);

    return 0;
}

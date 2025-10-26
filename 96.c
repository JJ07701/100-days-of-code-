#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *word_start = NULL;
    int i = 0;

    printf("Enter a sentence: ");
    gets(str);  

    while (1) {
        if (word_start == NULL && str[i] != ' ' && str[i] != '\0') {
            word_start = &str[i];  
        }

    
        if ((str[i] == ' ' || str[i] == '\0') && word_start != NULL) {
            reverseWord(word_start, &str[i - 1]);  
            word_start = NULL;  
        }

        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Sentence with each word reversed:\n%s\n", str);
    return 0;
}

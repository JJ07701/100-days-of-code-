#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch)
            count++;
        i++
    printf("\nFrequency of '%c' = %d\n", ch, count);

    return 0;
}

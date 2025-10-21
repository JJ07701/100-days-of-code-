#include <stdio.h>

int main() {
    char str[200];
    int i = 0;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }

    
    printf("\nString after replacing spaces with hyphens: %s\n", str);

    return 0;
}

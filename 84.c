#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  
        }
        i++;
    }


    printf("\nString in uppercase: %s\n", str);

    return 0;
}

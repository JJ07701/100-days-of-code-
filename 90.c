#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  
        i++;
    }

  
    printf("\nString after toggling case: %s\n", str);

    return 0;
}

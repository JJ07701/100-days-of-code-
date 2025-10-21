#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

  
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

  
    if (isPalindrome)
        printf("\nThe string is a palindrome.\n");
    else
        printf("\nThe string is NOT a palindrome.\n");

    return 0;
}

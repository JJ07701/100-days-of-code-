#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int m;

    printf("Enter date in format dd/mm/yyyy: ");
    gets(date);  
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    
    sscanf(month, "%d", &m);

    
    if (m < 1 || m > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("Converted date: %s-%s-%s\n", day, months[m - 1], year);

    return 0;
}

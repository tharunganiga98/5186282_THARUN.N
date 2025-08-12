#include <stdio.h>
int main() {
    for (int i = 0; i < 7; i++) {
        int day;
        printf("Enter day number (1 to 7): ");
        scanf("%d", &day);
        switch(day) {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
            default:
                printf("Invalid day number\n");
        }
    }
    return 0;
}

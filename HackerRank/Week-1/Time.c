#include <stdio.h>
#include <string.h>

int main() {
    char time[11];
    scanf("%s", time);

    int hour = (time[0] - '0') * 10 + (time[1] - '0');
    char meridian[3] = { time[8], time[9], '\0' };

    if (strcmp(meridian, "AM") == 0) {
        if (hour == 12)
            hour = 0;
    } else {
        if (hour != 12)
            hour += 12;
    }

    printf("%2d:%c%c:%c%c\n", hour, time[3], time[4], time[6], time[7]);

    return 0;
}

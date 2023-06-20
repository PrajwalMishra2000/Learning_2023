#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTimePeriod(struct Time* time) {
    printf("Enter the hours: ");
    scanf("%d", &(time->hours));

    printf("Enter the minutes: ");
    scanf("%d", &(time->minutes));

    printf("Enter the seconds: ");
    scanf("%d", &(time->seconds));
}

struct Time calculateDifference(struct Time time1, struct Time time2) {
    struct Time difference;

    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    struct Time time1, time2;

    printf("Enter the first time period:\n");
    getTimePeriod(&time1);

    printf("\nEnter the second time period:\n");
    getTimePeriod(&time2);

    struct Time difference = calculateDifference(time1, time2);

    printf("\nDifference between the two time periods: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}

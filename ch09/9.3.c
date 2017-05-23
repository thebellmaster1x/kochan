#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} TIME;

TIME elapsed_time (TIME past, TIME future);

int main (void) {

    TIME past, future;

    printf("Enter two times (HH:MM:SS in 24hr format):\n");

    scanf("%d:%d:%d", &past.hours, &past.minutes, &past.seconds);
    scanf("%d:%d:%d", &future.hours, &future.minutes, &future.seconds);
    
    TIME timeElapsed = elapsed_time(past, future);
    
    printf("The time elapsed is %d hours, %d minutes, and %d seconds.\n",
            timeElapsed.hours, timeElapsed.minutes, timeElapsed.seconds);

    return 0;

}

TIME elapsed_time (TIME past, TIME future) {

    TIME timeElapsed;
    int pastAbsoluteTime, futureAbsoluteTime;
    int elapsedSeconds;

    pastAbsoluteTime = past.seconds + 60 * past.minutes + 3600 * past.hours;
    futureAbsoluteTime = future.seconds + 60 * future.minutes + 3600 * future.hours;

    elapsedSeconds = futureAbsoluteTime - pastAbsoluteTime;

    // correct for crossing midnight
    if (elapsedSeconds < 0)
        elapsedSeconds += 24 * 60 * 60;

    timeElapsed.hours = elapsedSeconds / 3600;
    elapsedSeconds %= 3600;

    timeElapsed.minutes = elapsedSeconds / 60;
    elapsedSeconds %= 60;

    timeElapsed.seconds = elapsedSeconds;

    return timeElapsed;

}

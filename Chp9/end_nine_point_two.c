#include <stdio.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};

void elapsedTime(struct time start, struct time end);

int main(void){

    struct time start_time;
    struct time end_time;

    printf("Please enter start time (hh:mm:ss): ");
    scanf("%i:%i:%i", &start_time.hour, &start_time.minutes,&start_time.seconds);

    printf("Please enter stop time (hh:mm:ss): ");
    scanf("%i:%i:%i", &end_time.hour, &end_time.minutes,&end_time.seconds);

    elapsedTime(start_time, end_time);

    return 0;

}


void elapsedTime(struct time start, struct time end){

    struct time elapsed_time;

    

    printf("%i:%i:%i have passed between the given start and end time.\n",
        elapsed_time.hour,
        elapsed_time.minutes,
        elapsed_time.seconds );
    }
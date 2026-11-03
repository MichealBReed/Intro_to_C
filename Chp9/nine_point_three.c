#include <stdio.h>


struct time {
    int hour;
    int minutes;
    int seconds;
};




void elapsedTime(struct time start, struct time end);

struct time timeUpdate(struct time current);

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


struct time timeUpdate(struct time current){

    if(current.seconds == 59 && current.minutes != 59){
        current.seconds = 0;
        current.minutes+=1;
    }

    else if(current.seconds == 59 && current.minutes == 59){
        current.seconds = 0;
        current.minutes = 0;
        current.hour+=1;
    }

    else
        current.seconds+=1;

    return current;
}


void elapsedTime(struct time start, struct time end){

    struct time elapsed_time = {0, 0 ,0};


    while(start.seconds - end.seconds != 0 || start.minutes - end.minutes != 0 || start.hour - end.hour != 0){

        start = timeUpdate(start);
        elapsed_time.seconds+=1;

        if(elapsed_time.minutes == 60){
            elapsed_time.hour+=1;
            elapsed_time.minutes = 0;
        }

        if(elapsed_time.seconds == 60){
            elapsed_time.minutes+=1;
            elapsed_time.seconds = 0;
        }
    }

    printf("%i hours, %i minutes and %i seconds have passed between the given start and end time.\n",
        elapsed_time.hour,
        elapsed_time.minutes,
        elapsed_time.seconds );

    }

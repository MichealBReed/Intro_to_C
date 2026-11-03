#include <stdio.h>


struct date {
    int month;
    int day;
    int year;
};



//Function prototypes
int f_x(int year, int month);
int g_x(int month);
int N(struct date start_date);
int elapsedDays(struct date start_date, struct date end_date);



int main(void){

    struct date start;
    struct date end;
    int days;
  

    printf("Start date (mm dd yyyy): ");
    scanf("%i%i%i",&start.month,&start.day,&start.year);

    printf("Stop date (mm dd yyyy): ");
    scanf("%i%i%i",&end.month,&end.day,&end.year);

    days = elapsedDays(start,end);


    printf("That day falls on the %i day of the week.\n", days);

    return 0;
}


int f_x(int year, int month){
    if(month <= 2)
        year = year - 1;
    return year;
}

int g_x(int month){
    if (month <= 2)
        month+=13;
    else
        month+=1;
    return month;
}

int N(struct date given_date){

    int x;

    x = (1461 * f_x(given_date.year, given_date.month)) / 4 + (153 * g_x(given_date.month)) / 5 + given_date.day;

    return x;
}


int elapsedDays(struct date start_date, struct date end_date){
    
    int n1;
    int n2;

    n1 = N(start_date);
    printf("%i\n", n1);
    n2 = N(end_date);
    printf("%i\n", n2);


    return (n2 - n1) % 7;
}
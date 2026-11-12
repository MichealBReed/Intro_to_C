/*Write a function called clockKeeper that takes a dateAndTime structure as an arguement.
The function should call the timeUpdate function and if the time reached midnight, the function 
should call the dateUpdate function to switch to the next day. The function should return the updated dataAndTime structure.
*/

#include <stdio.h>


//Global Variables


//Defining the fundamental time and date structures used in the dateAndTime structure.
struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct date
{
    int month;
    int day;
    int year;
};

// Now the dateAndTime structure can be declared since we have defined the time and date structures.
struct dateAndTime
{
    struct date sdate;
    struct time stime;
};


const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


//Function Prototypes
struct time timeUpdate(struct time now);
struct date dateUpdate(struct date today);
struct dateAndTime clockKeeper(struct dateAndTime now);

int main(void){

    //Declare a dataAndTime structure that will be populated by the user.
    struct dateAndTime myDateTime;
    struct date test_date;


    printf("Please enter the date (mm/dd/yyyy):");
    scanf("%i/%i/%i", &myDateTime.sdate.month, &myDateTime.sdate.day,&myDateTime.sdate.year);

    //test_date = dateUpdate(myDateTime.sdate);

    //printf("The next day would be %i/%i/%i\n", test_date.month, test_date.day, test_date.year);

    printf("Please provide the time (hh:mm:ss):");
    scanf("%i:%i:%i", &myDateTime.stime.hour, &myDateTime.stime.minutes,&myDateTime.stime.seconds);

    myDateTime = clockKeeper(myDateTime);

    printf("The new date and time is %i/%i/%i and %i:%i:%i respectively.\n", myDateTime.sdate.month, myDateTime.sdate.day, myDateTime.sdate.year,
                                                                            myDateTime.stime.hour, myDateTime.stime.minutes, myDateTime.stime.seconds);

    return 0;

}


struct time timeUpdate(struct time now){


    if(now.seconds + 1 == 60)
        {
            now.seconds = 0;
            now.minutes+=1;
        
        if(now.minutes == 60)
            {
                now.minutes = 0;
                now.hour+=1;
            
            if(now.hour == 24)
            {
                now.hour = 0;
            }
        }
    }
    else
    now.seconds+=1;
            
    return now;
};


struct date dateUpdate(struct date now){

    int days_in_month;

    days_in_month = daysPerMonth[now.month - 1];
    

    if(now.month == 12)
        if(now.day + 1 > days_in_month)
            {
                now.month = 1;
                now.day = 1;
                now.year+=1;
            }
        else
            now.day+=1;
    
    else
        if(now.day + 1 > days_in_month)
            {
                now.month+=1;
                now.day = 1;
            }
        else
            now.day+=1;
    

    return now;
}

struct dateAndTime clockKeeper(struct dateAndTime now){

    now.stime = timeUpdate(now.stime);

    if (now.stime.hour == 0)
        now.sdate = dateUpdate(now.sdate);
    return now;
}

#include<stdio.h>
struct time{
int secoends;
int minutes;
int hours;
    };
    void time_difference(struct starttime,struct stoptime, struct *difference);
    int main()
    {
        struct time starttime,stoptime,difference;
        printf("enter hours,minutes,secoends: ");
        scanf("%d%d%d",&starttime.hours,&starttime.minutes,&starttime.secoends);
        printf("enter hours,minutes,secoends: ");
        scanf("%d%d%d",&stoptime.hours,&stoptime.minutes,&stoptime.secoends);
        timedifference(starttime,stoptime,&difference);
        printf("\nTIME DIFFERENCE");
        printf("%d%d%d",starttime.hours,starttime.minutes,starttime.secoends);
        printf("%d%d%d",stoptime.hours,stoptime.minutes,stoptime.secoends);
        printf("%d%d%d",difference.hours,difference.minutes,difference.secoends);
        return 0;

    }
    void time_difference(struct starttime,struct stoptime,struct *difference)
    {
      if(stop.secoends>start.secoends)
         {
            --start.minutes;
                start.secoend+=60;
         }
      difference->secoends=stop.secoends-start.secoends;
      if(stop.minutes>start.minutes)
         {
            --start.hour;
                start.minutes+=60;
         }
        difference->minutes=stop.minutes-start.minutes;
        difference->hours=stop.hours-start.hours;
    }


#include <stdio.h>
struct tagTMyTime{
    int hours;
    int minutes;
    int seconds;
};

int timeInSeconds(struct tagTMyTime *time){
  return time->seconds+time->minutes*60+time->hours*60*60;
}

void secondsInTime(struct tagTMyTime *time,int sec){
  time->hours=sec/3600;
  time->minutes=(sec - (time->hours * 3600)) / 60;
  time->seconds=sec%60;
}

void addSeconds(struct tagTMyTime *time, int s){
  time->seconds+=s;
  if(time->seconds>=60){
    time->minutes+=1;
    time->seconds-=60;
    if(time->minutes>=60){
      time->hours+=1;
      time->minutes-=60;
    }
  }
}
void addMinutes(struct tagTMyTime *time, int m){
  time->minutes=time->minutes+m;
  if(time->minutes>=60){
    time->hours=time->hours+1;
    time->minutes=time->minutes-60;
  }
}
struct tagTMyTime addHours(struct tagTMyTime *time, int h){
  time->hours+=h;
  if(time->hours>=24){
    time->hours=time->hours-24;
  }
}

int main(){
  struct tagTMyTime time;
  struct tagTMyTime *p;
  p=&time;
  int choice=4;
  int a;
  printf("Enter hours:");
  scanf("%d",&time.hours);
  printf("Enter minutes 0-59:");
  scanf("%d",&time.minutes);
  printf("Enter seconds 0-59:");
  scanf("%d",&time.seconds);
  int secs;
  do{
    printf("You entered %d:%d:%d \n",time.hours,time.minutes,time.seconds);
    printf("Do you want to add hours(1), minutes(2) or seconds(3),(4)for hours to seconds,(5)for sec to hours, press 0 to exit.");
    scanf("%d",&choice);
    switch(choice){

      case 1:
        printf("Enter hours to add:");
        scanf("%d",&a);
        addHours(p,a);
      break;
      case 2:
        printf("Enter minutes to add:");
        scanf("%d",&a);
        addMinutes(p,a);
      break;
      case 3:
        printf("Enter seconds to add:");
        scanf("%d",&a);
        addSeconds(p,a);
      break;
      case 4:
        printf("Time in seconds: %d\n", timeInSeconds(p));
      break;
      case 5:
        printf("Calc seconds to hours:");
        scanf("%d",&secs);
        secondsInTime(p,secs);
        printf("%02d:%02d:%02d\n",time.hours,time.minutes,time.seconds);
      break;
    }
  } while(choice!=0);
  return 0;
}
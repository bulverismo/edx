#include <stdio.h>

struct date {
  int year;
  int month;
  int day;
};

void readDate(struct date *);
void printDate(struct date);
struct date advanceDay(struct date);

int main(void) {
  
  struct date today,tomorow;
  readDate(&today);
  printDate(today);
  tomorow = advanceDay(today);
  printDate(tomorow);
  return 0;
}

void readDate(struct date * data)
{
  scanf("%d %d %d",&(*data).year,&(*data).month,&(*data).day);
}

void printDate(struct date data)
{
  printf("%02d/%02d/%4d\n",data.month,data.day,data.year);
}

struct date advanceDay(struct date today)
{
  struct date tomorow;

  tomorow = today;

  tomorow.day++;

  if(today.month==12 && today.day==31)
  {
    tomorow.day=1;
    tomorow.month = 1;
    tomorow.year++;
  }

  if(today.month==2 && today.day==28)
  {
    tomorow.day = 1;
    tomorow.month++;
  }

  if(today.day==31 && today.month != 12)
  {
      tomorow.day=1;
      tomorow.month++;
  }

  if(today.day==30)
  {
    if(today.month==4 || today.month==6 || today.month==9 || today.month==11)
    {
      tomorow.day=1;
      tomorow.month++;
    }
  }

  return tomorow;
}

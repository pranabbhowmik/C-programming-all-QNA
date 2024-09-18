#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
    int hours;
    int min;
    int sec;
} date;

void display(date d)
{
    printf("The date is %d/%d/%d-%d:%d:%d\n", d.date, d.month, d.year,d.hours,d.min,d.sec);
}

int datecmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    if (d1.hours > d2.hours)
    {
        return 1;
    }
    if (d1.hours < d2.hours)
    {
        return -1;
    }
    if (d1.min > d2.min)
    {
        return 1;
    }
    if (d1.min < d2.min)
    {
        return -1;
    }
    if (d1.sec > d2.sec)
    {
        return 1;
    }
    if (d1.sec < d2.sec)
    {
        return -1;
    }
    return 0;
}

int main()
{
    date d1 = {9, 12, 2002,5,25,22};
    date d2 = {9, 13, 2002,5,25,22};
    display(d1);
    display(d2);
    int a = datecmp( d1,d2);
    printf("The date comparison is %d",a);
    return 0;
}
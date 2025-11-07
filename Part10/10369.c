#include <stdio.h>
//
typedef int Status;
typedef struct{
    int year;
    int month;
    int day;
}DATE;

Status IsLeapYear(int year){
    if (year % 400 == 0){
        return  1;
    }
    else if (year % 4 == 0 &&  year % 100 != 0){
        return 1;
    }
    else{
        return 0;
    }
}

Status DateVaild(int year,int month,int day){
    if (month > 12 || month < 1){
        return 0;
    }
    if (month == 2){
        if (IsLeapYear(year) == 1){
            if (day < 1 || day > 29){
                return 0;
            }
        }
        else{
            if (day < 1 || day > 28){
                return 0;
            }
        }
        return 1;
    }
    else  if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day<1 || day>31)){
        return 0;
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day<1 || day>30)){
        return 0;
    }
    else{
        return 1;
    }
}

Status SetDate(DATE *d,int year,int month,int day){
    d->year = year;
    d->month = month;
    d->day = day;
    if (d->year == year && d->month == month && d->day == day && DateVaild(year,month,day) == 1){
        return 1;
    }
    else{
        return 0;
    }
}

void Print(const DATE *d){
    printf("Date:%d-%d-%d\n",d->year,d->month,d->day);
}

void AddOneDay(DATE *d){
    int day = d->day;
    int month = d->month;
    if (day == 31){
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10){
            d->day = 1;
            d->month = d->month + 1;
        }
        else if (month == 12){
            d->day = 1;
            d->month = 1;
            d->year = d->year + 1;
        }
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30){
        d->day = 1;
        d->month = d->month + 1;
    }
    else if (IsLeapYear(d->year) == 0 && day == 28 && month == 2){
        d->day = 1;
        d->month = 3;          
    }
    else if (IsLeapYear(d->year) == 1 && day == 28 && month == 2){
        d->day = 29;          
    }
    else if (IsLeapYear(d->year) == 1 && day == 29 && month == 2){
        d->day = 1;
        d->month = 3;
    }
    else{
        d->day = d->day + 1;
    }
}

int main()
{
    DATE date1;
	int y,m,d;
	printf("Please input year month day!\n");
	scanf("%d%d%d", &y, &m, &d);
	if(!SetDate(&date1,y,m,d))
		{ printf("Date input error!\n"); return 1; }
	Print(&date1);
	AddOneDay(&date1);
	printf("Add one day!\n");
	Print(&date1);
	return 0;
}
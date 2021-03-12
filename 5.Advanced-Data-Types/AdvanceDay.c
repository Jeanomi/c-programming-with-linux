#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *dt){
    scanf("%d", &(*dt).year);
    scanf("%d", &(*dt).month);
    scanf("%d", &(*dt).day);
}

void printDate(struct date dt){
    if(dt.month < 10){
        printf("0%d/", dt.month);
    }else{
        printf("%d/", dt.month);
    }
    
    if(dt.day < 10){
        printf("0%d/", dt.day);
    }else{
        printf("%d/", dt.day);
    }
    
    printf("%d\n", dt.year);
}

struct date advanceDay(struct date dt){
    if(dt.month == 1 || dt.month == 3 || dt.month == 5 ||dt.month == 7 ||dt.month == 8 ||dt.month == 10 ||dt.month == 12){
        if(dt.day == 31){
            dt.month++;
            if(dt.month == 13){
                dt.day = 1;
                dt.month = 1;
                dt.year++;
            }
        }
    }else if(dt.month == 4 ||dt.month == 6 ||dt.month == 9 ||dt.month == 11){
        if(dt.day == 30){
            dt.day = 1;
            dt.month++;
        }
    }else if(dt.month == 2){
        if(dt.day == 28){
            dt.day = 1;
            dt.month++;
        }
    }
    
    return dt;
}

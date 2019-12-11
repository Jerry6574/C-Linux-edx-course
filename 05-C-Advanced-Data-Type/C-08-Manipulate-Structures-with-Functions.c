#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
};

void readDate(struct date*);
void printDate(struct date);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

// Write your readDate(), printDate(), and advanceDate() functions here

void readDate(struct date* today){
    scanf("%d", &(*today).year);
	scanf("%d", &(*today).month);
	scanf("%d", &(*today).day);
}

void printDate(struct date today){
	printf("%02d/%02d/%d\n", today.month, today.day, today.year);
}

struct date advanceDay(struct date today){
	struct date tomorrow;
	int daysInMonth;
	
	switch(today.month){
		case 2:
			if(today.year % 4 == 0){
				daysInMonth = 28;
			} else{
				daysInMonth = 29;
			}
			
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			daysInMonth = 30;
			break;
		default:
			daysInMonth = 31;
	}
	
	if(today.day == daysInMonth){
		
		// advance to next year
		if(today.month == 12){
			tomorrow.year = today.year + 1;
			tomorrow.month = 1;
			tomorrow.day = 1;
		
		// advance to next month
		} else{
			tomorrow.year = today.year;
			tomorrow.month = today.month + 1;
			tomorrow.day = 1;
		}
	
	// advance to next day
	} else{
		tomorrow.year = today.year;
		tomorrow.month = today.month;
		tomorrow.day = today.day + 1;
	}
	
	return tomorrow;
}
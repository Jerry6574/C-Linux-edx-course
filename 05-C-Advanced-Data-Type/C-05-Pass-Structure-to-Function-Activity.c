#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
};

void readDate(struct date*);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

// Write your readDate() and printDate() functions here

void readDate(struct date* today){
    scanf("%d", &(*today).year);
	scanf("%d", &(*today).month);
	scanf("%d", &(*today).day);
}

void printDate(struct date today){
	printf("%d/%02d/%d", today.month, today.day, today.year);
}
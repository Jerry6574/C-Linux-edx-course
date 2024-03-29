#include <stdio.h>

struct student{
	char firstName[30];
	char lastName[30];
	int birthYear;
	double aveGrade;
};

void printStudent(struct student);
void readStudent(struct student* studptr);

int main(void) {
    struct student me;
    readStudent(&me);
    printStudent(me);
	return 0;
}

void readStudent(struct student *studptr) {
    printf("\nEnter a new student record: \n");
	
    printf("First name: ");
    scanf("%s", studptr->firstName);
	
    printf("Last name: ");
    scanf("%s", studptr->lastName);
	
    printf("Birth year: ");
    scanf("%d", &studptr->birthYear);  // -> has higher order of precedence over &
	
    printf("Average grade: ");
    scanf("%lf", &studptr->aveGrade);
}

void printStudent(struct student stud) {
    printf("Name: %s %s\n", stud.firstName, stud.lastName);
	printf("Year of birth: %d\n",stud.birthYear);
	printf("Average grade: %.2lf\n",stud.aveGrade);
}
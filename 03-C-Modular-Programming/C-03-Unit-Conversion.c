#include <stdio.h>

void convert(double value, char unit);
void runConvert();

int main(void){
	runConvert();
    return 0;
}

void convert(double value, char unit){
	if(unit == 'm'){
		double ftValue = value * 3.2808;
		printf("%lf %s\n", ftValue, "ft");
		
	} else if(unit == 'g'){
		double lbsValue = value * 0.002205 ;
		printf("%lf %s\n", lbsValue, "lbs");
		
	} else if(unit == 'c'){
		double fValue = 32 + 1.8 * value;
		printf("%lf %c\n", fValue, 'f');
	} 
}

void runConvert(){
	int nConversions = 0;
	int i = 0;
	double value = 0.0;
	char unit = '\0';
	scanf("%d", &nConversions);
	
	for(i = 0; i < nConversions; i++){
		scanf("%lf %c", &value, &unit);
		convert(value, unit);
	}
}


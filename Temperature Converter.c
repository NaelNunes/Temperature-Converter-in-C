#include <stdio.h>
#include <math.h>

int main()
{
	int indicator, indicator1C, indicator2C;
	float celsius, celsiusFahrenheit, celsiusKelvin, fahrenheit, fahrenheitCelsius, fahrenheitKelvin, kelvin, kelvinCelsius, kelvinFahrenheit;
	printf("Hello! Select by indicator number the temperature you want to enter to convert: \n");
	printf("1 - CELSIUS | 2 - FAHRENHEIT | 3 - KELVIN  ");
	scanf("%d", &indicator);
	
	if ( indicator == 1) {
		printf("Now choose the temperature to convert: \n");
		printf("2 - FAHRENHEIT | 3 - KELVIN  ");
		scanf("%d", &indicator1C);
		if ( indicator1C = 2) {
			printf("Now choose the value of temperature: \n");
			scanf("%f", &celsius);
			celsiusFahrenheit = (celsius * 1.8) + 32;
			printf("The conversion is: %f F!", celsiusFahrenheit);
		}	else if (indicator2C = 3) {
				printf("Now choose the value of temperature: \n");
				scanf("%f", &celsius);
				celsiusKelvin = celsius + 273.15;
				printf("The conversion is: %f K!", celsiusKelvin);
		}	else {
			printf("You did not enter a valid value!");
		}
	}
	
	if ( indicator == 2) {
		printf("Now choose the temperature to convert: \n");
		printf("1 - CELSIUS | 3 - KELVIN  ");
		scanf("%d", &indicator1C);
		if ( indicator1C = 1) {
			printf("Now choose the value of temperature: \n");
			scanf("%f", &fahrenheit);
			fahrenheitCelsius = (fahrenheit - 32)/1.8;
			printf("The conversion is: %f C!", fahrenheitCelsius);
		}	else if (indicator2C = 3) {
				printf("Now choose the value of temperature: \n");
				scanf("%f", &fahrenheit);
				fahrenheitKelvin = (((fahrenheit - 32) * 5)/9) + 273.15;
				printf("The conversion is: %f K!", fahrenheitKelvin);
		}	else {
			printf("You did not enter a valid value!");
		}
	}
	
	if ( indicator == 3) {
		printf("Now choose the temperature to convert: \n");
		printf("1 - CELSIUS | 2 - FAHRENHEIT | ");
		scanf("%d", &indicator1C);
		if ( indicator1C = 1) {
			printf("Now choose the value of temperature: \n");
			scanf("%f", &kelvin);
			kelvinCelsius = kelvin - 273.15;
			printf("The conversion is: %f C!", kelvinCelsius);
		}	else if (indicator2C = 2) {
				printf("Now choose the value of temperature: \n");
				scanf("%f", &kelvin);
				kelvinFahrenheit = ((kelvin - 273.15) * (9/5)) + 32; 
				printf("The conversion is: %f F!", kelvinFahrenheit);
		}	else {
			printf("You did not enter a valid value!");
		}
	}
}




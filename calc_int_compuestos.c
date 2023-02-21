// calculo intereces compuestos
// compilar: gcc -o calc_int_compuestos calc_int_compuestos.c -lm

#include <stdio.h>
#include <math.h>


int main()
{
	int year;
	double amount, principal = 1000.0, rate = .05;
	
	printf("%4s%25s\n", "Year", "Amount on deposit");
	
	for (year = 1; year <= 10; year++) {
		amount = principal * pow(1.0 + rate, year);
		printf("%4d%25.2f\n", year, amount);
		
		
	}
	return 0;
}


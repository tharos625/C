/* Como programas en C/C++
 * pag. 72 - Promedio Notas Alumnos
 * Modificado a como yo lo pense
 */

#include <stdio.h>

int main()
{
	int contador, nota, total;
	float promedio;
	
	contador = 0;
	total = 0;
	printf("Ingrese 0 para salir\n");
	
	while (nota != 0)
	{
		printf("Ingrese Nota: ");
		scanf("%d", &nota);
		
		if (nota > 0 ) {
		
			contador = contador + 1;
			total = total + nota;
			promedio = (float) total / contador;
				
		}
	}
	
	printf("Cant. notas ingresadas %d\n", contador);
	printf("Notas promedio %.2f\n", promedio);
	
	return 0;
}

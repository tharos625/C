#include<stdio.h>

int SUMA(int A1, int B1);

int main() {

int A, B, C;

	printf("Numero: ");
	scanf("%d",&A);
	printf("Numero: ");
	scanf("%d",&B);

	C = SUMA(A, B);

	printf("Resultado: %d\n", C);


}


int SUMA(int A1, int B1) {
	
	int resultado;
	
	resultado = A1 + B1;
	
	return resultado;
	
}

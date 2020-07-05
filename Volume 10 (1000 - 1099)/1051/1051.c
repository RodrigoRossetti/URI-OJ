#include <stdio.h>
 
int main() {
	double salario, ir, aux;
	scanf("%lf", &salario);
	if (salario >= 0 && salario <= 2000) {
		printf("Isento\n");
	}
	if (salario > 2000 && salario <= 3000) {
		salario -= 2000;
		ir = salario * 0.08;
		printf("R$ %.2f\n", ir);
	}
	if (salario > 3000 && salario <= 4500) {
		salario -= 3000;
		ir = 1000 * 0.08;
		ir = ir + (salario * 0.18);
		printf("R$ %.2f\n", ir);
	}
	if (salario > 4500) {
		salario -= 4500;
		ir = 1000 * 0.08;
		ir = ir + (1500 * 0.18);
		ir = ir + (salario * 0.28);
		printf("R$ %.2f\n", ir);
	}
}
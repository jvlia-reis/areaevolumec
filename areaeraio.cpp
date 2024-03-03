#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cmath>

using namespace std; 

/* Coloque o código deste programa no campo Entrega 5. Escreva um programa que leia do teclado um
número real R. Use o tipo double para R. Calcule e mostre na tela com três casas decimais:
a. A área do círculo de raio R
b. O volume da esfera de raio R
 */

int main() {
	
	double r, area_circ, vol_esf;
	
	printf("Insira o valor de R: ");
	scanf("%lf",&r);
	
	area_circ = M_PI * pow(r,2);
	
	vol_esf = (4.0/3.0) * M_PI * pow(r,3);
	
	printf("Area do circulo de raio %.3f: %.3f\n", r, area_circ);
    printf("Volume da esfera de raio %.3f: %.3f\n", r, vol_esf);
	
	return 0;
}

/*11.	Fa�a um programa em C++ que solicite ao usu�rio um n�mero inteiro que representa uma quantidade de segundos. O programa exibir� na tela o valor convertido em horas, minutos e segundos. Assim, se o usu�rio digitar o valor 78915, o programa dar� como sa�da 21 horas, 55 min e 15 segundos.*/
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
    int segundos, h, m, s, resto;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);
    
    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}


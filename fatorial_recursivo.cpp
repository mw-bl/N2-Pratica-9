#include <stdio.h>
#include <locale.h>

int fatorial(int n);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num, r;
	printf("Insira um n�mero: ");
	scanf("%d", &num);
	
	r =  fatorial(num);
	
	if(r == -1){
		printf("\nEntrada inv�lida. Insira um n�mero maior que 0.");
	} else {
		printf("\nO fatorial de %d �: %d\n", num, fatorial(num));
	}
}

/*
	Fun��o: Calcular fatorial;
	Entrada: n inteiro;
	Sa�da: fatorial de n, se n > 0 ou -1, se n < 0. 
*/

int fatorial(int n){
	
	if(n == 0) return 1;
	
	if(n > 0) return n * fatorial(n-1);
	
	return -1;
}

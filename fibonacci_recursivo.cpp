#include <stdio.h>
#include <locale.h>

int fibonacci(int n);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num, r;
	
	printf("Insira um n�mero: ");
	scanf("%d", &num);
	
	r =  fibonacci(num);
	
	if(r == -1){
		printf("\nEntrada inv�lida. Insira um n�mero maior que 0.");
	} else {
		printf("\nO n�mero correspondente na sequ�ncia fibonacci de %d �: %d\n", num, fibonacci(num));
	}
}

int fibonacci(int n){
	
	if(n == 1) return 1;
	
	if(n == 2) return 1;
	
	return fibonacci(n-1) + fibonacci(n-2);
	
	return -1;
}

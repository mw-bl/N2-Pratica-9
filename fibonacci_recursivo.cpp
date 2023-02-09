#include <stdio.h>
#include <locale.h>

int fibonacci(int n);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num, r;
	
	printf("Insira um número: ");
	scanf("%d", &num);
	
	r =  fibonacci(num);
	
	if(r == -1){
		printf("\nEntrada inválida. Insira um número maior que 0.");
	} else {
		printf("\nO número correspondente na sequência fibonacci de %d é: %d\n", num, fibonacci(num));
	}
}

int fibonacci(int n){
	
	if(n == 1) return 1;
	
	if(n == 2) return 1;
	
	return fibonacci(n-1) + fibonacci(n-2);
	
	return -1;
}

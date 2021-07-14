// Fibonacci.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include<vector>

//DC para calculo de Fibonacci ---- Custo exponencial

int fibonacci(int n) {

	if (n == 0) {
		return 0;
	}
	else if (n <= 2) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}

}


//PD para o cálculo de Fibonacci --- Custo linear O(n)

int fibonacciTD(int n) {


	//Criacao do vetor para guardar os resultados
	std::vector<int> Tabela;

	Tabela.push_back(0);
	Tabela.push_back(1);
	Tabela.push_back(1);

	for (int i = 3; i <= n; i++) {
		Tabela.push_back(-1);
	}

	//Calculo recursivo

	if (Tabela[n] == -1) {

		Tabela[n] = fibonacci(n - 1) + fibonacci(n - 2);

		
	}

	return Tabela[n];
}


int fibonacciBU(int n) {

	if (n == 0) {
		return 0;
	}
	else if (n <= 2) {
		return 1;
	}
	else {

		std::vector<int> Tabela;
		Tabela.push_back(0);
		Tabela.push_back(1);
		Tabela.push_back(1);


		for (int i = 3; i <= n; i++) {
			int a = Tabela[n - 1] + Tabela[n - 2];
			Tabela.push_back(a);
		}

		return Tabela[n];
	}

	
}







int main()
{


	int n;
	std::cout << "Digite o valor de n para o calculo de Fibonacci:" << std::endl;
	std::cin >> n;

	//std::cout << "O valor de Fibonacci para " << n << " e " << fibonacci(n) << std::endl;

	//std::cout << "O valor de Fibonacci para " << n << " e " << fibonacciTD(n) << std::endl;

	std::cout << "O valor de Fibonacci para " << n << " e " << fibonacciBU(n) << std::endl;



    
}


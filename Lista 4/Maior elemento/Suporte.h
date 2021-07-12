#pragma once
#include<iostream>
#include<vector>
#include<random>
#include<algorithm>



//Criando e exibindo um vector aleatorio

std::vector<int>  V_aleatorio() {

	std::vector<int> A;
	int rand_max, x;
	std::cout << "Insira o tamanho do vetor desejado " << std::endl;
	std::cin >> rand_max;

	srand(time(NULL));

	//Impressao do vector na tela
	for (int i = 0; i < rand_max; i++)
	{
		x = rand() % 100;

		A.push_back(x);
		std::cout << A[i] << "  ";

	}
	std::cout << std::endl;

	return A;
}


//Impressao do vetor

void printvector(std::vector<int> P) {

	for (int i = 0; i < P.size(); i++) {
		std::cout << P[i] << " ";
	}
	std::cout << std::endl;

}


//Encontrar a posicao do maior elemento
int posicao(std::vector<int>& P, int valor) {
	int posicao;
	for (int i = 0; i < P.size(); i++) {
		if (P[i] == valor)
			posicao = i;
	}
	return posicao;
}


//Elemento de maior valor

int maiorelemento(std::vector<int>& P, int inicio, int fim) {
	int maior;
	int maxi1;
	int maxi2;
	
	
	if(P.size() == 0) {
		return 0;
	} else if( P.size() == 1){
		return P[0];
	}
	else if(P.size() == 2) {
		
		return std::max(P[inicio], P[fim]);
		
	}
	else {
		int meio = (inicio + fim) / 2;
		maxi1 = maiorelemento(P, inicio, meio);
		maxi2 = maiorelemento(P,meio + 1, fim);
		maior = std::max(maxi1, maxi2);

		return maior;
	}

}


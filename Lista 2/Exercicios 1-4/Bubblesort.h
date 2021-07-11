#pragma once
#pragma once
#include<iostream>
#include<vector>
#include<random>


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

//Algoritmo Bubblesort
void bubblesort(std::vector<int> V1) {
	//Implementacao da operacao apresentacao pelo psedocodigo do livro

	for (int i = 0; i < V1.size() - 2; i++)
	{
		for (int j = 0; j <= V1.size() - 2 - i; j++) {

			if (V1[j + 1] < V1[j]) {
				std::swap(V1[j], V1[j + 1]);
			}
		}
	}

	//Imprimindo o vetor ordenado na tela
	for (int a = 0; a < V1.size(); a++) {
		std::cout << V1[a] << "  ";
	}


}

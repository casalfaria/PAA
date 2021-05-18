#pragma once
#pragma once
#include<iostream>
#include<vector>
#include<random>


//Algoritmo Selectionsort
void selectionsort(std::vector<int> V1) {
	//Implementacao da operacao apresentacao pelo psedocodigo do livro

	int aux;
	int min;

	for (int i = 0; i <= (V1.size() - 2); i++) {
		min = i;

		for (int j = i + 1; j <= (V1.size() - 1); j++) {
			if (V1[j] < V1[min]) {
				min = j;
				
			}
			
					}
		std::swap(V1[i], V1[min]);
	}
	
	
	
	//Imprimindo o vetor ordenado na tela
	for (int a = 0; a < V1.size(); a++) {
		std::cout << V1[a] << "  ";
	}

	
}

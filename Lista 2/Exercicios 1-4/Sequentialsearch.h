#pragma once


#include <iostream>
#include <vector>

int sequential_search(std::vector<int> V) {

	//Identificando o valor a ser procurado

	int key;
	int P = -1;
	std::cout << "Qual valor deseja verificar? " << std::endl;
	std::cin >> key;

	//Fazendo a busca sequencial
	for (int i = 0; i < V.size(); i++) {
		if (V[i] == key) {

			P = i;
			break;
		}
	}

	//Imprimindo o retorno 
	std::cout << "A posicao de  " << key << " no vetor eh " << P << std::endl;

	return 0;

}
// Mochila.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include<vector>
#include "Suporte.h"

void printvector(std::vector<float> Aux) {

	for (int i = 0; i < Aux.size(); i++) {
		std::cout << Aux[i] << " ";
	}
	std::cout << std::endl;
}

void printvector1(std::vector<int> Aux) {

	for (int i = 0; i < Aux.size(); i++) {
		std::cout << Aux[i] << " ";
	}
	std::cout << std::endl;
}


//Funcao que cria todos os subconjuntos
std::vector< std::vector<int> > getAllSubsets(std::vector<int> set)
{
	std::vector< std::vector<int> > subset;
	std::vector<int> empty;
	subset.push_back(empty);

	for (int i = 0; i < set.size(); i++)
	{
		std::vector< std::vector<int> > subsetTemp = subset;

		for (int j = 0; j < subsetTemp.size(); j++)
			subsetTemp[j].push_back(set[i]);

		for (int j = 0; j < subsetTemp.size(); j++)
			subset.push_back(subsetTemp[j]);
	}
	return subset;
}


//Funcao para calcular o peso de cada subconjunto
std::vector<float> vetorpeso(std::vector< std::vector<int> > All, std::vector<float> peso) {
	float soma = 0;
	std::vector<float> vpeso;
	for (int i = 0; i < All.size(); i++) {
		
		for (int j = 0; j < All[i].size(); j++) {
			soma = 0;
			if (All[i][j] == NULL) {
				vpeso.push_back(0);
			}else{
				soma = peso[j] + soma;
				vpeso.push_back(soma);
			}
			
		}
		
	}
	return vpeso;
}


int main()
{
	
	
	int n = 2;
	float capacidade = 40;
	std::vector<float> peso;
	std::vector<float> valor;
	std::vector<int> subset;

	for (int i = 0; i < n; i++) {
		peso.push_back(rand() % 50);
		valor.push_back(rand() % 100 + 1);
		subset.push_back(i);
	}

	printvector(peso);
	printvector(valor);
	printvector1(subset);

	std::vector< std::vector<int> > Allsub = getAllSubsets(subset);
	printVV(Allsub);
	std::cout << std::endl<< Allsub.size()<<std::endl;


	

	std::vector<float> Confere = vetorpeso(Allsub, peso);
	printvector(Confere);
	

	return 0;
}


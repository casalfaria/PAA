#pragma once

#include<iostream>
#include<vector>


//Funcao que cria todos os subconjuntos
std::vector< std::vector<int> > subsets(std::vector<int> set)
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

//Imprimir os subconjuntos
void printVV(std::vector< std::vector<int> > All) {

	for (int i = 0; i < All.size(); i++) {
		for (int j = 0; j < All[i].size(); j++) {
			std::cout << All[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
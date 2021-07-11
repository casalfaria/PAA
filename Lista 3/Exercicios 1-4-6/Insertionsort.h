#pragma once

#include<iostream>
#include<vector>


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

void printvector(std::vector<int> Aux) {

	for (int i = 0; i < Aux.size(); i++) {
		std::cout << Aux[i] << "  ";
	}
	std::cout << std::endl;
	
}

std::vector<int> Insertionsort(std::vector<int> Aux) {
	int v, j;

	for (int i = 1; i < Aux.size(); i++) {
		v = Aux[i];
		j = i - 1;

		while (j >= 0 && Aux[j] > v) {
			Aux[j+1] = Aux[j];
			j = j - 1;
			
		}
		Aux[j + 1] = v;
		
	}

	return Aux;

}
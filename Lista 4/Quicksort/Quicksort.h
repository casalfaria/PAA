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
		std::cout << P[i] << "  ";
	}
	std::cout << std::endl;

}



//Funcao de particao com ultimo elemento tomado como pivot
int Partition(std::vector<int>& v, int start, int end) {

	int pivot = end;
	int j = start;
	for (int i = start; i < end; ++i) {
		if (v[i] < v[pivot]) {
			std::swap(v[i], v[j]);
			++j;
		}
	}
	std::swap(v[j], v[pivot]);
	return j;

}

int Quicksort(std::vector<int>& v, int start, int end) {
	int p = 0;
	if (start < end) {
		p = Partition(v, start, end);
		Quicksort(v, start, p - 1);
		Quicksort(v, p + 1, end);
	}

	//system("pause");
	return p;


}
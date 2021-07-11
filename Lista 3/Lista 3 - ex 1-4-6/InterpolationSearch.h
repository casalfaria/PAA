#pragma once
#include<iostream>
#include<vector>


int interpolationsearch(std::vector<int> Aux, int n, int x) {

	int inicio = 0;
	int fim = Aux.size() - 1;

	while (inicio <= fim && x >= Aux[inicio] && x <= Aux[Aux.size() - 1]) {

		if (inicio == fim) {
			if (Aux[inicio] == x) {
				return inicio;
			} return -1;
		}


		int pos = inicio + ((x - Aux[inicio]) * (fim - inicio) / (Aux[fim] - Aux[inicio]));

		if (Aux[pos] == x) {
			return pos;
		}

		if (Aux[pos] < x) {
			inicio = pos + 1;
		}
		else {
			inicio = pos - 1;
		}

	}
	return -1;

}
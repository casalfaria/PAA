// ClosestPair.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//


#include <iostream>
#include <vector>
#include <utility>
#include <random>
#include "ClosestP.h"

using namespace std;

int main() {

	//Gerando pontos aleatorios

	//Numero de pontos
	const int tam = 4;
	vector<float> dists;
	int menor_d;

	
	pair<int, int> pontos[tam];

	for (int i = 0; i < tam; i++) {
		pontos[i].first = rand() % 100;
		pontos[i].second = rand() % 100;
		cout << "(" << pontos[i].first << "," << pontos[i].second << ")" << endl;
	}


	//Calculando as distancias entre os pontos dois a dois e reservando em um vector
		for (int i = 0; i < tam; i++) {
			for (int j = i + 1; j < tam; j++) {

				dists.push_back(distance(pontos[i], pontos[j]));

			}

		}

		//Tamanho do vetor com distancias
		cout << endl << dists.size() << endl;

		//Imprimindo o vetor de distancias
		for (int k = 0; k < dists.size(); k++) {
			cout << dists[k] << "   ";
		}
		
		
		

		//Identificacao da menor distancia
		menor_d = dists[0];
		for (int k = 0; k < dists.size(); k++) {
			

			if (menor_d > dists[k]) {
				menor_d = dists[k];
				
			}
		}


		
		cout << endl << endl << "A menor distancia entre dois pontos do conjunto e " << menor_d << endl;


		


		return 0;
	}
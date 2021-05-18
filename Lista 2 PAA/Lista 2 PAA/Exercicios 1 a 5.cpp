// Lista 2 PAA.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>
#include <random>
#include"Bubblesort.h"
#include "Selectionsort.h"
#include "Sequentialsearch.h"
#include "String Mach BF.h"
#include "Bubblesort.h"
#include "Closest Pair BF.h"



std::vector<int> V_aleatorio();

int main()
{
		
	//Gerando o vetor de valores aleatorios nao ordenados
	
	//std::vector<int> R = V_aleatorio();


	//EXERCICIO 1 - Ordenando o vector criado a partir do BUBBLESORT
	//bubblesort(R);

	
	
	//EXERCICIO 2 - Ordenando o vector criado a partir do SELECTIONSORT
	//selectionsort(R);



	//EXERCICIO 3 -Fazendo a busca a partir do SELECTION SEARCH
	//sequential_search(R);



	/*EXERCICIO 4 - String Mach 

	std::string  T = "A ufop eh a melhor universidade de MG";

	std::string P = "ufop";

	std::cout << T << std::endl;
	string_mach(T, P);*/

	
	//EXERCICIO 5 - Closest Pair

	Point A, B;

	A.x = 2;
	A.y = 4;
	B.x = 10;
	B.y = 12;

	float a = distance(A, B);

	std::cout <<"A distancia entre os dois pontos e " << a << std::endl;

	

	return 0;

	}


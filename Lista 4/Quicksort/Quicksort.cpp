// Quicksort.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>
#include "Quicksort.h"

//Impressao do vetor




int main()
{
	
	std::vector<int> Teste = V_aleatorio();
	//std::vector<int> Teste = { 2,5,7,3,10,30,18,6,5 };
	Quicksort(Teste,0,Teste.size()-1);
	printvector(Teste);



    return 0;
}


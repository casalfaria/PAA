// Moeda Falsa.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include<vector>



int fakeCoin(std::vector<int> V, int start, int end) {
	
	if ((end - start) == 1) {
		return start;
	}

	int soma = 0;
	
	for (int i = start; i < end/2; i++) {
		soma += V[i];
		
	}
	if (soma != end / 2) {
		start = 0;
		end = end / 2;
		fakeCoin(V, start, end);
	}
	else {
		start = end / 2;

		fakeCoin(V, start, end);
	}
	
}


int main()
{
	//A moeda falsa sempre terá peso maior
	std::vector<int> Moedas = {1,1,1,1,1,1,1,1,2,1,1,1};
	int posicao;

	posicao = fakeCoin(Moedas, 0, Moedas.size());

	std::cout <<"A posicao da moeda falsa e "<< posicao << std::endl;

	
	
	return 0;

}


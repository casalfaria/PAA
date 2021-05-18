//BUBBLESORT

#include <iostream>
#include <array>



using namespace std;

int main() {

	//Declaracao das variaveis
	array <int, 7> x = { 89,45,68,90,29,31,17 };
	int i, j, a;

	//Implementacao da operacao apresentacao pelo pseudocodigo do livro
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j <= 5 - i; j++) {
			if (x[j + 1] < x[j]) {
				a = x[j];
				x[j] = x[j + 1];
				x[j + 1] = a;
			}
		}

	}

	//Impressao do arranjo ordenado na tela
	for (i = 0; i <= 6; i++)
	{
		cout << x[i] << endl;
	}
	return 0;
}
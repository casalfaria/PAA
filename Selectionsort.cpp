//SELECTION SORT

#include <iostream>
#include <array>

using namespace std;

int main() {

	array<int, 7> y = { 89,45,68,90,29,34,17 };
	int i, j, a, min;

	for (i = 0; i <= 7; i++) {
		min = i;

		for (j = i + 1; 6; j++) {
			if (y[j] < y[min]) {
				min = j;
			}
			a = y[i];
			y[i] = y[min];
			y[min] = a;

		}
	}

	//Impressao do arranjo ordenado na tela
	for (i = 0; i <= 6; i++)
	{
		cout << x[i] << endl;
	}
	return 0;


}
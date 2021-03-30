#include <iostream>
#include<array>


using namespace std;
int busca();
int k;

int main() {
	
	cout << "Qual elemento deseja procurar?" << endl;
	cin >> k;
	busca();
	return 0;
}

int busca() {
	
	int i;
	int r = -1;

	array<int, 7> x = { 89,45,68,90,29,34,17 };

	for (i = 0; i < 7; i++) {
		if (x[i] == k) {
			r = i;
		}

	}

	cout <<endl<< "Sua posicao eh:  " << r << endl;
	return 0;
}
// Merge Sort 2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>

void printvector(std::vector<int> P) {
    for (int i = 0; i < P.size(); i++) {
        std::cout << P[i] << " ";
    }

    std::cout << std::endl;
}

void merge(std::vector<int>& V, int inicio, int meio, int fim) {
    std::vector<int>Aux;

    int i, j;
    i = inicio;
    j = meio + 1;

    while (i <= meio && j <= fim) {

        if (V[i] <= V[j]) {
            Aux.push_back(V[i]);
            ++i;
        }
        else {
            Aux.push_back(V[j]);
            ++j;
        }
    }

    while (i <= meio) {
        Aux.push_back(V[i]);
        ++i;
    }

    while (j <= fim) {
        Aux.push_back(V[j]);
        ++j;
    }

    for (i = inicio; i <= fim; ++i) {
        V[i] = Aux[i - inicio];
    }
}

void Mergesort(std::vector<int>& V, int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        Mergesort(V, inicio, meio);
        Mergesort(V, meio + 1, fim);
        merge(V, inicio, meio, fim);
    }
}

int main()
{

    std::vector<int> V = { 5,7,8,2,13,10,20,55,100 };
   

    printvector(V);
    Mergesort(V,0,V.size()-1);
    printvector(V);



}

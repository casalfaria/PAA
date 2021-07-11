
/*
LISTA 3 - PAA
EXERCICIOS: INSERTIONSORT ; INTERPOLATION SEARCH ; GERAÇÃO DE SUBCONJUNTOS;
*/

#include <iostream>
#include<vector>
#include "Insertionsort.h"
#include "InterpolationSearch.h"
#include "Subset.h"

int main(){


    
    //Insertion Sort

    std::vector<int> teste = V_aleatorio();

    std::vector<int> teste1 = Insertionsort(teste);

    printvector(teste1);



    //Interpolation search
    int x;
    std::cout<< "Insira o valor a ser buscado: " << std::endl;
    std::cin >> x;
    int n = teste1.size();
    int pos = interpolationsearch(teste1, n, x);

    if (pos == -1) {
        std::cout << "Valor nao encontrado";
    }
    else {
        std::cout << "O valor buscado esta na posicao " << pos;
    }


    

    /*Subconjuntos

    std::vector<int> A = { 1,2,3};

    std::vector < std::vector<int>> subs = subsets(A);
    printVV(subs);
    */

    return 0;

    }


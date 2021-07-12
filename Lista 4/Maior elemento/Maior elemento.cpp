// Maior elemento.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>
#include "Suporte.h"

int main()
{
    std::vector<int> E = V_aleatorio();
    int n = E.size()-1;
    //printvector(E);

    int x = maiorelemento(E, 0, n);

    std::cout << "A posicao do maior elemento do vetor e " << posicao(E,x) << std::endl;

    return 0;

}


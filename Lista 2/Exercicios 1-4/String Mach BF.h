#pragma once
#include<iostream>
#include<vector>

void string_mach(std::string T, std::string P) {

	int m = T.size();
	int n = P.size();
	int a = -1;

	for (int i = 0; i <= (m - n); i++) {
		int j = 0;
		while (j < n && P[j] == T[i + j]) {
			j = j + 1;
		}
		if (j == n) {
			a = i;
		}

	}
	std::cout << "O padrao procurado inicia-se apos a posicao " << a << std::endl;
}

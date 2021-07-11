#pragma once
#pragma once
#include<iostream>
#include<utility>
#include<vector>



using namespace std;


//Calculo da distancia entre os pontos
float distance(pair<int,int> p1, pair<int,int> p2) {
	int n = 2;

	float d;
	for (int i = 0; i <= n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			d = sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
		}

	}
	return d;
}











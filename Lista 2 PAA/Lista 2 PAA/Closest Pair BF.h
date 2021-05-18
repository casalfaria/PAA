#pragma once
#include<iostream>

//Criando uma estrutura points que representara os pares ordenados
struct Point
{
	float x;
	float y;
};

//Quantidade de pontos
int n = 2;

//Calculo da distancia entre os pontos
float distance(Point p1, Point p2){
	int n = 2;

	float d;
	for (int i = 0; i <= n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
		}

	}
	return d;
}

//Identificacao da menor distancia



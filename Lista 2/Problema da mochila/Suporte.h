#pragma once
#include<iostream>
#include<vector>


void printVV(std::vector< std::vector<int> > All) {

	for (int i = 0; i < All.size(); i++) {
		for (int j = 0; j < All[i].size(); j++){
			std::cout << All[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


/*
std::vector<float> printVV(std::vector< std::vector<int> > All) {

	std::vector<float> vpeso;
	for (int i = 0; i < All.size(); i++) {
		for (int j = 0; j < All[i].size(); j++) {
			vpeso.push_back()
		}

		return std::vector<float> vpeso;
	}
}*/
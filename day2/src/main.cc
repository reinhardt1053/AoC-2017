/*
 * Copyright (c) 2017, Massimo Fazzolari <reinhardt1053 at gmail dot com>
 *
 * This file is released under the BSD license, see the COPYING file.
 */

#include <iostream>
#include <fstream>

using namespace std;

int checksum1(int input[16][16]){
	int min, max, value, checksum = 0;

	for (int i = 0; i < 16; i++) {
		min = 100000;
		max = 0;

		for (int j = 0; j < 16; j++){
			value = input[i][j];

			if (value < min) min = value;
			if (value > max) max = value;
		}

		checksum += (max-min);
	}

	return checksum;
}

int checksum2(int input[16][16]){
	int a, b,checksum = 0;

	for (int i = 0; i < 16; i++) {

		for (int j = 0; j < 16; j++){
			a = input[i][j];
			
			for (int z = 0; z < 16; z++){
				b = input[i][z];
				if (z != j && a % b == 0) {
					checksum += (a/b);
					break;
				}
			}
		}
	}

	return checksum;
}

int main() {

	ifstream file("input.txt");
	
	if (!file)
	{
		throw std::runtime_error("Cannot open input.txt");
	}

	int input[16][16];
	for (int i = 0; i < 16; i++) {

		for (int j = 0; j < 16; j++){
			file >> input[i][j];
		}
	}

	cout << "Checksum 1: " << checksum1(input) << endl;
	cout << "Checksum 2: " << checksum2(input) << endl;
	return 0;
}



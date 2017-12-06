/*
 * Copyright (c) 2017, Massimo Fazzolari <reinhardt1053 at gmail dot com>
 *
 * This file is released under the BSD license, see the COPYING file.
 */

#include <iostream>
#include <fstream>

using namespace std;


int main() {

    ifstream file("input.txt");
    
    if (!file)
	{
	    throw std::runtime_error("Cannot open input.txt");
	}

	int min, max, value, checksum = 0;

    for (int i = 0; i < 16; i++) {
    	min = 100000;
    	max = 0;

    	for (int j = 0; j < 16; j++){
    		file >> value;

    		if (value < min) min = value;
    		if (value > max) max = value;
    	}
    	
    	checksum += (max-min);
    }

    cout << "Checksum: " << checksum << endl;

    return 0;
}



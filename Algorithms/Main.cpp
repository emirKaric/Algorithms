#include <iostream>
#include "DefinitionsOfAlgorithmsFunctions.h"

void ispis(int* array, int max) {
	for (int i = 0; i < max; i++){
		std::cout << array[i] << "\n";
	}
}




int main() {
	int* array = new int[10]{ 5,4,1,3,2,8,7,9,10,6 };

	//bubbleSort(array, 10);
	insertionSort(array, 10);
	ispis(array, 10);


	delete[]array;
	return 0;
}
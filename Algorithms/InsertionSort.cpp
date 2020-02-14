#include "DefinitionsOfAlgorithmsFunctions.h"


void insertionSort(int* array, int max) {
	int pom;
	for (int i = 0; i < max; i++){
		int j = i;
		while (j > 0 && array[j - 1] > array[j]){
			pom = array[j];
			array[j] = array[j - 1];
			array[j - 1] = pom;
			--j;
		}
	}
}
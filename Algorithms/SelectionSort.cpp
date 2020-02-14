#include "DefinitionsOfAlgorithmsFunctions.h"




void selectionSort(int* array, int max) {
	int minIndex = 0, pom;
	for (int i = 0; i < max - 1; i++){
		minIndex = i;
		for (int j = i + 1; j < max; j++)
			if (array[minIndex] > array[j])
				minIndex = j;
		if (minIndex != i) {
			pom = array[minIndex];
			array[minIndex] = array[i];
			array[i] = pom;
		}
	}
}
#include "DefinitionsOfAlgorithmsFunctions.h"



void bubbleSort(int* array, int max) {
	int j = 0;
	bool promjena = true;
	int pomocna;
	// Ako se nije desila zamjena pozicija u for petlji algoritam prestaje sa radom "NIZ JE SORTIRAN"
	while (promjena){
		promjena = false;
		j++;
		// svakom novom iteracijom vanjske while petlje for ima manje rotacija
		for (int i = 0; i < max - j; i++){
			if (array[i] > array[i + 1]) {
				pomocna = array[i];
				array[i] = array[i + 1];
				array[i + 1] = pomocna;
				promjena = true;
			}
		}
	}
}
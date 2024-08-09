#include <stdio.h>
#include <stdlib.h>
#define TAM 13

void insertionSort (int *lista) {
	int i, j, aux;
	
	for (i = 1; i < TAM; i++) {
		aux = lista[i];
		j = i - 1;
		
		while (j >= 0 && lista[j] > aux) {
			lista[j + 1] = lista[j];
			j--;
		}
		lista[j + 1] = aux;
	}
	
	printf ("\n\nLISTA ORDENADA\n==============\n");
	for (i = 0; i < TAM; i++)
		printf ("%d   ", lista[i]);
}

int main() {
	int lista[TAM], i, *l;
	
	srand(time(NULL));
	
	printf ("LISTA ORIGINAL\n==============\n");
	for (i = 0; i < TAM; i++) {
		lista[i] = rand() % 101;
		printf ("%d   ", lista[i]);
	}
	
	l = lista;
	
	insertionSort(l);
	
	return 0;
}

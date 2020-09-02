#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int* genArr(int range){
    int max = 100;
    srand(time(NULL));
    
    int arr[range];
    for(int i = 0 ; i < range ; i++){
	arr[i] = rand()%max;
    }
    printf("\n\n");
    return arr;
}

void printArr(int *arr, int range){
    for(int i = 0 ; i < 10 ; i++)
	printf("[%i] = %i\n", i, arr[i]);
}

void sortArr(){
    int range = 10;
    int *arr;
    arr = genArr(range);
    printf("\nOrigin arr:\n");
    printArr(arr,range);
    
    for(int a = 0; a < range-1; a++)
	for(int b = 0; b < range-1; b++)
	    if(arr[b]>arr[b+1]){
		int t = arr[b];
		arr[b] = arr[b+1];
		arr[b+1] = t;
	    }
    printf("\n\nSorted arr:\n");
    printArr(arr, range);
}
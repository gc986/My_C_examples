#include <stdio.h>
#include "hello.h"
#include "qsort.h"

int main(){
    int menuItem = 0;
    do{
	printf("\n");
	printf("========================\n");
	printf("Please select menu item:\n");
	printf("0 - EXIT\n");
	printf("1 - hello\n");
	printf("2 - QuickSort\n");
	printf("\n");
	scanf("%d",&menuItem);
	printf("\n");
	switch(menuItem){
	    case 1: hello();
	    case 2: sortArr();
	    break;
	}
    } while(menuItem != 0);
    return 0;
}
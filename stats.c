/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  unsigned int i = SIZE;
  /* Statistics and Printing Functions Go Here */

  printf("Unsorted array: \n");
  print_array(test,i);
	
  sort_array(test,i);

  printf("sorted array: \n");
  print_array(test,i);

  printf("Statistics below: \n");
  print_statistics(test,i);
}

/* Add other Implementation File Code Here */



void print_array(unsigned char test[],unsigned int size){
	for (int j=0;j<=size-1;j++){
		printf(" %d \t",test[j]);

	}
	printf("\n");
}

void sort_array(unsigned char test[],unsigned int size){
	
  int minId,temp;
  
  for (int i=0; i<=size-1; i++){
	minId = i;
	
	for (int j=i+1; j<= size-1; j++){
		if(test[j]>test[minId]){
			minId = j;
		}
	}
	if(minId!=i){
			temp = test[i];
			test[i] =  test[minId];
			test[minId] = temp;
			
		}
  } 

}

unsigned int find_mean(unsigned char test[],unsigned int size){
	unsigned int sum=0;;
	for (int j=0;j<=size-1;j++){
		sum = sum + test[j];

	}

return sum/size;
}

unsigned char find_median(unsigned char test[],unsigned int size){
int mid;
	if (size%2 ==0){
		mid = size/2;
		return (test[mid]+test[mid+1])/2;
	}
	else{
		mid = (size-1)/2;
		return test[mid]/2;
	}
}

unsigned char find_minimum(unsigned char test[],unsigned int size){

	return test[size-1];
}

unsigned char find_maximum(unsigned char test[],unsigned int size){
	return test[0];
}

void print_statistics(unsigned char test[],unsigned int i){

	printf("The mean value is %d \n",find_mean(test,i));
	printf("The median value is %d \n",find_median(test,i));
	printf("The minimum value is %d \n",find_minimum(test,i));
	printf("The maximum value is %d \n",find_maximum(test,i));
}



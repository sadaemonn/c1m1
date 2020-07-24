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
 * @file stats.c
 * @brief Prints the array then the statistics of it
 *
 *  The code prints the unsigned char array. After sorting it in descending
 *  order, analyses it  and reports the analytics on the maximum, minimum,
 *  mean, and median of the data set.
 *
 * @author Eren Yazici 
 * @date Fri July 24 2020
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

	print_array(test, SIZE);
        sort_array(test, SIZE);
        print_statistics(test, SIZE);
}

void print_statistics(unsigned char array[], unsigned int length){
	printf("\n-------Statistics of the array-------\n");
        printf("\nMinimum: %d", find_minimum(array, length));
        printf("\nMaximum: %d", find_maximum(array, length));
        printf("\nMean: %d", find_mean(array, length));
        printf("\nMedian: %d\n\n", find_median(array, length));
}

void print_array(unsigned char array[], unsigned int length){
	int i;
        printf("\n-------The array------- \n\n");
        for( i=0 ; i<length ; i++ ){
                printf("%u ", array[i]);
        }
        printf("\n");
}

unsigned char find_median(unsigned char array[], unsigned int length){
	int median;
        if (length%2==0){
                median = (array[length/2-1]+array[length/2])/2;
                return median;
        }
        median = array[(length+1)/2-1];
        return median;
}

unsigned char find_mean(unsigned char array[], unsigned int length){
	int i;
        int sum=0;
        for( i=0 ; i<length ; i++ ){
                sum = sum+array[i];
        }

        return sum/length;
}

unsigned char find_maximum(unsigned char array[], unsigned int length){
	int i;
        unsigned char max=0;
        for( i=0 ; i<length ; i++ ){
                if ( array[i]>=max ){
                        max = array[i];
                }
        }
        return max;
}

unsigned char find_minimum(unsigned char array[], unsigned int length){
	int i;
        unsigned char min=array[0];
        for( i=0 ; i<length ; i++ ){
                if ( array[i]<=min ){
                        min = array[i];
                }
        }
        return min;
}

void sort_array(unsigned char array[], unsigned int length){
	unsigned char swap;
        int a, b;
        for( a=0 ; a<length ; a++ ){
                for( b=0 ; b<length-a-1 ; b++){
                        if( array[b]<array[b+1] ){
                                swap = array[b];
                                array[b] = array[b+1];
                                array[b+1] = swap;
                        }
                }
        }
}

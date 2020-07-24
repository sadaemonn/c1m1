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
 * @file stats.h
 * @brief Contains declaration of the functions used in stats.c file
 *
 * After the declaration of each function, there is a function description,
 * then parameter descriptions and a description of the return value are listed.
 *
 * @author Eren Yazici
 * @date Fri July 24 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(unsigned char array[], unsigned int length);
/**
 * @brief Prints the statistics of given unsigned char array
 *
 * This function takes as an input a unsigned char array and its length as as an
 * unsigned integer. Then prints its maximum, minimum, mean, and median
 * values.
 *
 * @param array[] The unsigned char array to find its statistics
 * @param length The unsigned integer length of the array
 *
 * @return void
 */
void print_array(unsigned char array[], unsigned int length);
/**
 * @brief Prints given unsigned char array
 *
 * This function takes as an input a unsigned char array and its length as as an
 * unsigned integer. Then prints it.
 * 
 * @param array[] The unsigned char array to be printed
 * @param length The unsigned integer length of the array
 *
 * @return void
 */

unsigned char find_median(unsigned char array[], unsigned int length);
/**
 * @brief Finds the median of given array.
 *
 *  This function takes as an input a unsigned char array and its length as as an
 * unsigned integer. Then finds its median and returns as an unsigned char.
 *
 * @param array[] The unsigned char array to find its median value
 * @param length The unsigned integer length of the array
 *
 * @return The median value of array as unsigned char
 */
unsigned char find_mean(unsigned char array[], unsigned int length);
/**
 * @brief Finds the mean of given array.
 *
 *  This function takes as an input a unsigned char array and its length as as an
 * unsigned integer. Then finds its mean and returns as an unsigned char.
 *
 * @param array[] The unsigned char array to find its mean value
 * @param length The unsigned integer length of the array
 *
 * @return The mean value of array as unsigned char
 */

unsigned char find_maximum(unsigned char array[], unsigned int length);
/**
 * @brief Finds the maximum of given array.
 *
 *  This function takes as an input a unsigned char array and its length as as an
 * unsigned integer. Then finds its maximum  and returns as an unsigned char.
 *
 * @param array[] The unsigned char array to find its maximum value
 * @param length The unsigned integer length of the array
 *
 * @return The maximum value of array as unsigned char
 */
unsigned char find_minimum(unsigned char array[], unsigned int length);
/**
 * @brief Finds the minimum of given array.
 *
 *  This function takes as an input a unsigned char array and its length as as an
 * unsigned integer. Then finds its minimum  and returns as an unsigned char.
 *
 * @param array[] The unsigned char array to find its minimum value
 * @param length The unsigned integer length of the array
 *
 * @return The minimum value of array as unsigned char
 */

void sort_array(unsigned char array[], unsigned int length);
/**
 * @brief Sorts given unsigned char array
 *
 * This function takes as an input a unsigned char array and its length as as an
 * unsigned integer. Then sorts the array in descending order and returns
 * nothing.
 *
 * @param array[] The unsigned char array to be sorted in descending order
 * @param length The unsigned integer length of the array
 *
 * @return void
 */


#endif /* __STATS_H__ */


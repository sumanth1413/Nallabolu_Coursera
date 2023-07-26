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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief print the elements of an array
 *
 * This function takes an unsigned char array and
 * array size as inputs and print te elements with tab delimiter
 *
 * @param test array to be printed
 * @param size size of an array
 *
 * @return nothing
 */
void print_array(unsigned char test[],unsigned int size);

/**
 * @brief find mean of an array
 *
 * This function takes an unsigned char array and
 * array size as inputs and calculates mean
 *
 * @param test array to find mean
 * @param size size of an array
 *
 * @return unsigned int mean of the array
 */
unsigned int find_mean(unsigned char test[],unsigned int size);

/**
 * @brief find median of an array
 *
 * This function takes an unsigned char array and
 * array size as inputs and calculates median
 *
 * @param test array to find median
 * @param size size of an array
 *
 * @return unsigned char median of the array
 */
unsigned char find_median(unsigned char test[],unsigned int size);

/**
 * @brief find minimum of an array
 *
 * This function takes an unsigned char array and
 * array size as inputs and calculates minimum of the sorted array
 *
 * @param test array to find minimum
 * @param size size of an array
 *
 * @return unsigned char minimum of the array
 */
unsigned char find_minimum(unsigned char test[],unsigned int size);

/**
 * @brief find maximum of an array
 *
 * This function takes an unsigned char array and
 * array size as inputs and calculates maximum of the sorted array
 *
 * @param test array to find maximum
 * @param size size of an array
 *
 * @return unsigned char maximum of the array
 */
unsigned char find_maximum(unsigned char test[],unsigned int size);

/**
 * @brief sort an array
 *
 * This function takes an unsigned char array and
 * array size as inputs and sorts array in 
 * descending order
 *
 * @param test array to find minimum
 * @param size size of an array
 *
 * @return unsigned char minimum of the array
 */

void sort_array(unsigned char test[],unsigned int size);
/**
 * @brief prints statistics of an array
 *
 * This function takes an unsigned char array and
 * array size as inputs and prints statistics by calling
 * functions for each statistic
 *
 * @param test array to find minimum
 * @param size size of an array
 *
 * @return nothing
 */
void print_statistics(unsigned char test[],unsigned int size);

#endif /* __STATS_H__ */

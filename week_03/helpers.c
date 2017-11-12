/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (value < 0){
        return false;
    }

    int middle;
    int end = n - 1 ;
    int start = 0;

    while(end >= start){
        middle = (start + end) / 2 ;
        if(value == values[middle]){
            return true;
        } else if (value > values[middle] ){
            end = middle - 1;
        } else if (value < values[middle] ){
            start = middle + 1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for(int i = 0; i < n; i++){
        if ( values[i] > values[i+1]){
            int holder = values[i+1];
            values[i+1] = values[i];
            values[i] = holder;
        }
    }
}

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
        if(values[middle] == value){
            return true;
        } else if (values[middle] > value ){
            end = middle - 1;
        } else if (values[middle] < value ){
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
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if ( values[j] > values[j+1]){
                int holder = values[j+1];
                values[j+1] = values[j];
                values[j] = holder;
            }
        }
    }
}

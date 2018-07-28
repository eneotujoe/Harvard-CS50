/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
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
    // TODO: implement a searching algorithm
    if (n < 1)
    {
        return false;
    }
    
    sort(values, n); // Sort the values for the code below.
    
    
    // Implementation of binary search.
    int start = 0;
    int end = n-1;
    
    while (end >= start)
    {
        int center = (start + end)/2; // Doesn't matter if odd or even center will round up since it's an int.
        
        if (end == start) // If the array only has one number, check that number. 
        {
            if (value == values[n-1])
                return true;
        }
        
        if (end == 1) // If the array only has two numbers, check both. Not sure if this is necessary.
        {
            if (value == values[1])
                return true;
            if (value == values[0])
                return true;
        }
        
        if (value == values[center]) // If number is at the center.
            return true;
            
        else if (value < values[center])
        {
            end = center - 1; //search left
        }
        
        else
        {
            start = center + 1; //search right
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 **/
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
   
    int swaps = true;
    
    while (swaps == true)
    {
        int temp;
        swaps = false;
        for (int i = 0; i < (n-1); i++)
        {
            if (values[i] > values[i+1])
            {
                temp = values[i + 1];
                values[i + 1] = values[i];
                values[i] = temp;
                swaps = true;
            }
        }
    }
}
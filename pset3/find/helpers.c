/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 * Input: (needle, elements of haystack, size of haystack)
 */
bool search(int value, int values[], int n)
{
/*    int mid = n / 2;
    
    while (mid > 0)
    {
        int mid = n / 2
        if (values[mid] == value)
        {
            return true;
        }
        else if (values[mid] > value)
        {
            n = mid;
            mid = mid / 2;
        }
        else if (values[mid] < value)
        {
            mid = (mid + n + 1) / 2;
        }
    }
    
    return false;*/
    
    if (n == 0)
    {
        return false;
    }

    int mid = n / 2;
    
    if (values[mid] == value)
    {
        return true;   
    }
    else if (values[mid] < value)
    {
         search(value, values + mid + 1, n - mid - 1);
    } 
    else
    {
        search(value, values, mid);
    }

    return false;

}

/**
 * Sorts array of n values.
 * Insertion Sort
 */
void sort(int values[], int n)
{
    for (int i = 1; i < n; i++)
    {   
        int j = i;
        while (values[j] < values[j - 1])
        {
            int temp = values[j - 1];
            values[j - 1] = values[j];
            values[j] = temp;
            j--;
        }
    }
    return;
}

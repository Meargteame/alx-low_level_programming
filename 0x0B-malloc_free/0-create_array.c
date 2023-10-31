#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * *create_array-creates an array
 * @c - character to store an array
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;
	if(size ==0)
	{
		return (NULL);
        arr =  malloc (sizeof(char)*size);
	}
        if (arr == NULL)
	{
		return (NULL);
        }
	for(int i =0; i< size ;i++)
	{
	   arr[i] = c;
	} 
       return (arr);
}

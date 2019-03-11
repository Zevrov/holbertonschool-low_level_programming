#include <stdio.h>
#include "dog.h"

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    struct dog my_dog;

	        my_dog.name = NULL;
		    my_dog.age = 0;
		        my_dog.owner = NULL;
			    print_dog(&my_dog);
			        return (0);
}

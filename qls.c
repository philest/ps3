#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>
#include "qls.h"
#include "lc.h"



int *
getLocations(int desiredChar)
{
	int count = 0;
	int c = 0;
	int numHits = 0;
	int size = 1;
	int *a;

	a = malloc(sizeof(int) * size);
	assert( a != 0);


	while( (c = getchar()) != EOF )
	{



		if (c == desiredChar)
		{
			while(numHits >= size) /*increase array size*/
			{
				size *= 2;
				a = realloc(a, sizeof(int) * size);
				assert( a != 0);
			}

			a[numHits] = count; /*record  where c occured */
			numHits++;
		}

			count++;
	}

	/*trim extra space on a*/
	if (size > numHits)
		a = realloc(a, sizeof(int) * numHits);


	return a;

}


char *
inputToStr()
{
	int count = 0;
	int c;
	int size = 1;
	char *s;

	s = malloc(sizeof(char) * size);
	assert(s != 0);

	while( (c = getchar()) != EOF)
	{
		while(count >= size)
		{
			size *= 2;
			s = realloc(s, sizeof(char) * size);
			assert( s != 0);
		}

		s[count] = c;
		count++;
	}

	/*trim the extra space*/
	if(size > count)
	{
		s = realloc(s, sizeof(char) * size);
		assert(s != 0);
	}

	return s;

}





int main(int argc, char **argv)
{
	letterCount **letterCount2D;
	letterCount2D = makeLetterCount2D( (argc - 1) );

	int sLength = 0;
	int i, j;
	int c;
	int *locations;

/*	const char *fileText;
	scanf("")*/

	for(i = 1; i < argc; i++)
	{
		sLength = strlen( (argv[i]));
		letterCount2D[i - 1] = makeLetterCountArr(sLength); /*creates an array of LetterCount structs-- with one for each char in the string*/

		for(j = 0; j < sLength; j++)
		{
			c = argv[i][j];
			locations = getLocations(c);
			initLetterCount( &letterCount2D[i - 1][j], c, locations);

		}


	}

	/*debugging*/
	if (argc > 1)
	printf("You entered the first arg: %s \n The first location of %c in the input is: %d\n", argv[1], argv[1][0], letterCount2D[0]->locations[0]);




} 



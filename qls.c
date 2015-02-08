#include <string.h>
#include <stdio.h>
#include "qls.h"
#include "lc.h"



int getCount(int desiredChar)
{
	int count = 0;
	int c = 0;

	while( (getchar() = c) != EOF )
	{
		if (c == desiredChar)
			count++;
	}

	return count;

}


int main(int argc char **argv)
{
	letterCount **letterCount2D;
	letterCount2D = makeLetterCount2D( (argc - 1) );

	int sLength = 0;
	int i, j;
	int c, count;

	for(i = 0; i < argc; i++)
	{
		sLength = strlen( (argv[i + 1]));
		letterCount2D[i] = makeLetterCountArr(sLength); /*creates an array of LetterCount structs-- with one for each char in the string*/

		for(j = 0; j < sLength; j++)
		{
			c = argv[i + 1][j];
			count = getCount(c);
			initLetterCount( letterCount2D[i][j], c, count);

		}


	}

	/*debugging*/
	if (argc > 1)
	printf("You entered the first arg: %s \n 
			The number of %c's in the input is: %d", argv[2], argv[2][0], letterCount2D[0]->count);




} 



#include "lc.h"

letterCount **
makeLetterCount2D(int numRows)
{
	letterCount **p;
	p = malloc(sizeof(letterCount *) * (numRows + 1)) /*space for sentinel*/ 
	assert( p != 0 );

	p[numRows] = 0; /*intialize sentinel*/

	return p;
}



letterCount *
makeLetterCountArr(int numRows)
{
	letterCount *lcp; 

	lcp = malloc(sizeof(letterCount) * (numRows + 1)); /*one more space for sentinel value*/
	assert(lcp != 0);

	lcp[numRows] = 0; /*sentinel value*/

	return lcp
}

void
initLetterCount(letterCount *lcp, int c, int count)
{
	lcp->c = c;
	lcp->count = count;

}


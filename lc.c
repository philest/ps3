#include <stdlib.h> 
#include <assert.h>
#include "lc.h"

letterCount **
makeLetterCount2D(int numRows)
{
	letterCount **p;
	p = malloc(sizeof(letterCount *) * (numRows + 1)); /*space for sentinel*/ 
	assert( p != 0 );

	p[numRows] = makeLetterCountArr(0); /*intialize sentinel*/

	return p;
}



letterCount *
makeLetterCountArr(int numRows)
{
	letterCount *lcp; 

	lcp = malloc(sizeof(letterCount) * (numRows + 1)); /*one more space for sentinel value*/
	assert(lcp != 0);

	int arr[1]; /*sentinel value of location array*/
	arr[0] = -1; 

	initLetterCount( &lcp[numRows], 0, arr); /*sentinel value of count -1 */

	return lcp;
}

void
initLetterCount(letterCount *lcp, int c, int *locations)
{
	lcp->c = c;
	lcp->locations = locations;

}


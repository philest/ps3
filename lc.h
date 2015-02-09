/*a pair of a character and how often it appears*/
typedef struct letterCount {
	int c;
	int *locations;
} letterCount;

/*intializes a letterCount struct by passing a pointers*/
void initLetterCount(letterCount * lcp, int c, int *locations);

/*return a pointer to an array of letterCount structs*/
letterCount *makeLetterCountArr(int numRows);

/*returns a pointer to an array of letterCount pointers*/
letterCount **makeLetterCount2D(int numRows);



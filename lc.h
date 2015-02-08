/*intializes a letterCount struct by passing a pointers*/
void initLetterCount(letterCount *, int c, int count);

/*return a pointer to an array of letterCount structs*/
letterCount *makeLetterCountArr(int numRows);

/*returns a pointer to an array of letterCount pointers*/
letterCount **makeLetterCount2D(int numRows);

/*a pair of a character and how often it appears*/
typedef struct letterCount {
	int c;
	int count;
} letterCount;



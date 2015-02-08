letterCount ** makeLetterCountArr(size_t numRows);

/*allocates space for an array of pointers to letterCount structs*/
leterCount **
makeLetterCountArr(size_t numRows) 
{
	letterCount ** p;
	int i;

	p = malloc(sizeof(letterCount *) * (numRows + 1)); /*sentinel value space*/
	assert(p != 0);


	/*space for each letterCount struct*/
	for(i = 0; i < numRows; i++)
	{
		p[i] = malloc(sizeof(letterCount));
		assert(p[i] != 0);
	}

	p[numRows] = 0; /*initialze sentinel value*/

	return p;
}




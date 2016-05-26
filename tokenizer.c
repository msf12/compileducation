#include "tokenizer.h"

int populateBuffer(const unsigned char buffer, FILE *source)
{
	switch (buffer)
	{
		case 1:
			fgets(Buffer1,BUFFER_SIZE,source);
			break;
		case 2:
			fgets(Buffer2,BUFFER_SIZE,source);
			break;
		default:
			return 1;
	}
	return 0;
}

int tokenize(FILE *source, FILE *out)
{
	if(!(populateBuffer(1,source) && populateBuffer(2,source)))
	{
		return 1;
	}
	printf("Buffers populated supposedly");
	for (int i = 0; i < BUFFER_SIZE; ++i)
	{
		printf("%d: %d - %d",i,Buffer1[i],Buffer2[i]);
	}
}
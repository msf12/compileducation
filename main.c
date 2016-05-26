/*
 * Test if the command-line argument is a file and, if so, pass it to the first
 * stage of the lexical analyzer for reading into buffers and tokenization
 * argv = [filename, flags, output file (optional)]
 */
#include <stdlib.h>
#include <stdio.h>
#include "flags.h"

int main(int argc, char const *argv[])
{
	if (argc == 0)
		return 1; //temporary code for No Arguments Error
	FILE *source; //source is the source code of the input file
	source = fopen(argv[0], "r");
	if (source == NULL)
		return -1; //temporary code for File not Found Error.
	unsigned int flags = parseFlags(argc,argv);

	return 0;

}


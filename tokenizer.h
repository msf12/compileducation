#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 256

char Buffer1[BUFFER_SIZE],
     Buffer2[BUFFER_SIZE];

/**
 * Takes a variable for which buffer to repopulate.
 * Possible values are 1 and 2 for Buffer1 and Buffer2.
 * Any other value returns error code 1.
 */

int populateBuffer(const unsigned char buffer, FILE *source);

int tokenize(FILE *source);

#endif
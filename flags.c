/*
*This file contains all necessary code for processing the flags
*Associated with flags.h
*/
#include "flags.h"
#define OFLAG 1;
#define INVALIDFLAG 256;

unsigned int parseFlags(int argc, char const *argv[]){
	unsigned int fID = 0; //fID stands for flag ID, default state 0000 0000
	for (int k = 1; k<argc; ++k){ //cycles through possible flags
		if (*argv[k]=='-'){
			char fTemp = *(argv[k]+1);
			switch (fTemp){
				case ('o') : //case for an instance of the -o flag
					fID = fID|OFLAG; // sets to xxxx xxx1
					break;
				default : //if there is no valid flag
					fID = fID|INVALIDFLAG; //sets to 1xxx xxxx
					break;
			}
		}
		else
			fID = fID|INVALIDFLAG;
	}
}
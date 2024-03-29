WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/*
 *********************************************
 *  415 Compilers                            *
 *  Spring 2019                              *
 *  Students                                 *
 *  Authors: Ulrich Kremer                   *
 *********************************************
 */


#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "Instr.h"
#include "InstrUtils.h"
#include "Utils.h"


int main(int argc, char *argv[])
{
        Instruction *InstrList = NULL;
	
	if (argc != 2) {
		ERROR("Use of command:\n  schedule -a/b/c < ILOC file\n");
		exit(EXIT_FAILURE);
	}

	fprintf(stderr,"------------------------------------------------\n");
	fprintf(stderr,"            Instruction Scheduler\n               415:compilers\n                Spring 2019\n");
	fprintf(stderr,"------------------------------------------------\n");

        InstrList = ReadInstructionList(stdin);
 
        if (!strcmp(argv[1], "-a")) {
	  fprintf(stderr, "   HEURISTIC: longest latency weighted path\n\n"); 
	} else
        if (!strcmp(argv[1], "-b")) {
	  fprintf(stderr, "    HEUTISTIC: highest latency instruction\n\n"); 
	} else
        if (!strcmp(argv[1], "-c")) {
	  fprintf(stderr, "        HEURISTIC: my own\n\n"); 
	} else  {
	  ERROR(" INVALID HEURISTIC: Use of command:\n  schedule -a/b/c < ILOC file\n");
	  exit(EXIT_FAILURE);
	}

        PrintInstructionList(stdout, InstrList);

	fprintf(stderr,"\n-----------------DONE---------------------------\n");
	
	return EXIT_SUCCESS;
}

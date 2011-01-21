#ifndef PROGRAM_H_
#define PROGRAM_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "instruction_index.h"
#include "hash_table.h"
#include "memory.h"

typedef struct
{
	int start;

        int* instr;

	hash_table* label_htab;

	int** values;
	int num_values;

        int*** args;

} program;

program* create_program(char* filename, memory* pMemory);
void destroy_program(program* p);

int* add_value(program* p, const int val);
int parse_value(char* str);

#endif

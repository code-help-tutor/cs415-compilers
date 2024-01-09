WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/**********************************************
        CS415  Project 3
        Spring  2019
        Studentn version
**********************************************/

#ifndef _INSTRUCTION_H_
#define _INSTRUCTION_H_

#define NOLABEL -1
#define EMPTY 0
#define STATIC_AREA_ADDRESS 1024
#define MAX_VIRTUAL_REGISTERS 4096

/* 
 * reduced instruction set as compared to project 2
 */

typedef enum opcode_name {ADD=0, SUB, MULT, 
	                  LOADI, LOADAI, 
                          STOREAI, OUTPUTAI} Opcode_Name;
extern 
FILE *outfile;

extern
int NextRegister();

extern
int NextLabel();

extern
int NextOffset(int units); /* units of 4 bytes */

extern
void emitComment(char *comment);

extern 
int emit(int label_index, 
	  Opcode_Name opcode, 
	  int field1, 
	  int field2, 
	  int field3);

extern
int cse_optimization_flag;


#endif /* _INSTRUCTION_H_ */





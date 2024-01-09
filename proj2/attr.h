WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/**********************************************
        CS415  Project 2
        Spring  2019
        Student Version
**********************************************/

#ifndef ATTR_H
#define ATTR_H

typedef union {int num; char *str;} tokentype;

typedef enum type_expression {TYPE_INT=0, TYPE_BOOL, TYPE_ERROR} Type_Expression;

typedef struct {
        Type_Expression type;
        int targetRegister;
        } regInfo;

#endif


  

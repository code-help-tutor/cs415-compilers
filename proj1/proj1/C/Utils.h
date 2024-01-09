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


#ifndef UTILS_H
#define UTILS_H

#define BUG(...) err("BUG", __func__, __LINE__, __VA_ARGS__)
#define ERROR(...) err("ERROR", __func__, __LINE__, __VA_ARGS__)
#define WARNING(...) err("WARNING", __func__, __LINE__, __VA_ARGS__)
#define DEBUG(...) err("DEBUG", __func__, __LINE__, __VA_ARGS__)

int err(const char *level, const char *func, int line, const char *fmt, ...);

#endif

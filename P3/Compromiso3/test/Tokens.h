#ifndef TOKENS_H_INCLUDED
#define TOKENS_H_INCLUDED

/***
 * Header file that contains all token code constants
 * used by flex output source code
 *
 * @Author : Manuel Peralta.
 *
 * */

#include <stdio.h>

#define ID 1
#define NUM 2
#define PLUS 3
#define MINUS 4
#define MULT 5
#define DIV 6
#define ASGN 7
#define SEMI 8
#define LPAREN 9
#define RPAREN 10

/**
 * Including new tokens.
 **/
#define STUD_ID 11
#define PHONE 12
#define EMAIL 13
#define URL 14
#define UNKW 15

#endif // TOKENS_H_INCLUDED

#ifndef STD
#define STD

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/*
How it works ?

the idea is to using the string int this way:
string mystring =("ciao bello",-1);

If you know the length of the string you reduce complexity
and should enter just the length of the string you entered

init build returns the pointer to the first byte after the one needed to allocate the struct , that is the one of the string

[pointerstruct+len+1] plus one needed for the terminator character.

In fact you can safely use that return pointer as a normal char * .
*/


typedef char *string;

typedef struct std{

	int size;

	char str[];

}Std;

/*build a string*/
string init(string,int);


/*simple mystrlen*/
unsigned int mystrlen(string c);

/*copy string for use this function the user must build with init two string before.*/
void mystrcpy(string dst,string src,int size);


/*delete the string*/
void delstd(string old);


unsigned int stdlen(const string);

int str_char(string src,char token);

void println(string);
void lower(string);
void upper(string);
void reverse(string);




#endif
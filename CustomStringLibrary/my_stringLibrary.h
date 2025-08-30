#ifndef MY_STRINGLIBRARY_H_
#define MY_STRINGLIBRARY_H_

#include <stdio.h>
#include <stdlib.h>

int is_lowercase(char);
char to_lowercase(char);
int is_uppercase(char);
char to_uppercase(char);
int myStrlen(char *);
int all_letters(char *);
int num_in_range(char *, char, char);
int diff(char *, char*);
void shorten(char *, int);
int len_diff(char *, char *);
void remakeString(char *, int);
void rm_left_space(char *);
void rm_right_space(char *);
void rm_space(char *);
int find(char *, char *);
char * ptr_to(char *, char *);
int is_empty(char *);
char * str_zip(char *, char *);
void capitalize(char *);
int myStrcmp(char *, char *);
int largerString(char *, char *);
int strcmp_ign_case(char *, char *);
void take_last(char *, int);
char * dedup(char *);
void copyToEmptyString(char *, char *);
char * pad(char *, int);
int ends_with_ignore_case(char *, char *);
char * repeat(char *, int, char);
char * insertInBetween(char *, char *, int);
char * removeCharAtIndex(char *, int);
char * removeStringAtIndex(char *, int, int);
char * replace(char *, char *, char *);
char * myStrcat(char *, char *);
char * addCharAtEnd(char *, char);
char * str_connect(char **, int, char);
void shiftStringsLeft(char **, int);
void rm_empties(char **);
char * isolateString(char *, int);
int number_of_left_space(char *);
char ** str_chop_all(char *, char);

#endif
#ifndef __LIBRARY_MANAGEMENT_SYSTEM_H__
#define __LIBRARY_MANAGEMENT_SYSTEM_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct library
{
    int book_id;
    char book_name[20];
    char author_name[20];
}book;


typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;

test_values searchbook(int id);

test_values addition(int id,char name[],char author[]);

test_values deletebook(int id);

test_values issuebook(int id);

test_values viewbook(void);

#endif

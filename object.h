//
// Created by ThankfulBird on 14.12.2018.
//

#ifndef OOP_C99_OBJECT_H
#define OOP_C99_OBJECT_H

#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    FALSE, TRUE
} Boolean;
typedef struct Object _Object_;
typedef _Object_ * Object;

struct Object
{
    char * (*to_string)(char string[], Object object);
};

char string[50];

Object _Object();
char * to_string(char string[], Object object);

Object _Object()
{
    Object new_object = (Object)malloc(sizeof(_Object_));
    if (new_object != NULL)
    {
        new_object->to_string = to_string;
        return new_object;
    }
    else
    {
        _Object();
    }
}

char * to_string(char string[], Object object)
{
    sprintf(string, "[Object@%p]", object);
    return string;
}

#endif //OOP_C99_OBJECT_H

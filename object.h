/****************************************************************************
 * Copyright (C) 2018 by Muhammed Bera Koc                                  *
 *                                                                          *
 * This file is part of Object.                                             *
 *                                                                          *
 *   Object is free software: you can redistribute it and/or modify it      *
 *   under the terms of the GNU Lesser General Public License as published  *
 *   by the Free Software Foundation, either version 3 of the License, or   *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   Object is distributed in the hope that it will be useful,              *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU Lesser General Public License for more details.                    *
 *                                                                          *
 *   You should have received a copy of the GNU Lesser General Public       *
 *   License along with Object.  If not, see <http://www.gnu.org/licenses/>.*
 ****************************************************************************/

/**
 * @file object.h
 * @author Muhammed Bera Koc
 * @date 25 December 2018
 * @brief object.h is the core library for project.
 *
 * object.h is basically a light-weight imitation of Object class
 * in Java using C language. Methods which heavily depend on threads
 * and concurrency are intentionally not included. The main reason
 * behind this crucial decision is that thread programming is not
 * cross platform.
 */

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

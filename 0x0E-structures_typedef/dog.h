#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 *  * struct dog - dog
 *   * @name: name of the dog
 *    * @age: how old the dog is
 *     * @owner: who owns the dog
 *      */
typedef struct dog
{
		char *name;
			float age;
				char *owner;
}

int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog(char *name, float age, char *owner);
char *_strdup(char *str);

#endif

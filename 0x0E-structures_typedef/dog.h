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
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
#endif

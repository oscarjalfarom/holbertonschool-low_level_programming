#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a structure to represent information about a dog
 * @name: Name of the dog (string of characters)
 * @age: Age of the dog (floating-point number)
 * @owner: Name of the dog's owner (string of characters)
 *
 * Description: This structure represents basic information about a dog,
 * including its name, age, and the name of its owner.
 */
typedef struct dog
{
	char name[50];
	float age;
	char owner[100];
} Dog;

#endif

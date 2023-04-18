#include "dog.h"
#include <stdlib.h>

/**
 * lenstr - calculate the length of a string
 * @s: string
 *
 * Return: lenght of the string
 */

int lenstr(char *s)
{
	int n = 0;

	while (s[n])
		n++;

	return (n);
}

/**
 * cpystr - store a copy of the string
 * @s1: string destination
 * @s2: string to be copied
 *
 * Return: s1
 */

char *cpystr(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i]; i++)
		s1[i] = s2[i];

	s1[i] = '\0';

	return (s1);

}

/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);

	dog2->name = malloc(lenstr(name) + 1);
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}

	dog2->owner = malloc(lenstr(owner) + 1);
	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}

	dog2->name = cpystr(dog2->name, name);
	dog2->age = age;
	dog2->owner = cpystr(dog2->owner, owner);

	return (dog2);
}

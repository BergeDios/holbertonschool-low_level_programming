#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return a pointer to new space with copied string
 * @str: string to be copied
 * Return: pointer to duplicated string or null if there's no memory
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *da;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[i] != 0; i++)
		;
	da = malloc(sizeof(char) * i + 1);
	if (da == NULL)
	{
		return (NULL);
	}
	while (j <= i)
	{
		da[j] = str[j];
		j++;
	}
	return (da);
}
/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of new dog
 * Return: new dog or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);
	dog2->name = _strdup(name);
	if (!dog2->name)
		free(dog2);
	dog2->age = age;
	dog2->owner = _strdup(owner);
	if (!dog2->owner)
	{
		free(dog2->name);
		free(dog2);
	}
	return (dog2);
}

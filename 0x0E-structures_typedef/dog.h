#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for perro info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*
 * dog_t - new name for type struct dog
 */
typedef struct dog dog_t;

#endif

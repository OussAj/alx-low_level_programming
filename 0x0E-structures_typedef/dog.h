#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct of dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif


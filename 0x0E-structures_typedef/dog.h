#ifndef DOG_H
#define DOG_H

/**
 * struct dog -our structure
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner
 *
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
}
my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */

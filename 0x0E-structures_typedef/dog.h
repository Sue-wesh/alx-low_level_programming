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
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - gives dog's info
 * @name: name of the dog?
 * @age: age of the dog?
 * @owner: who owns the dog?
 *
 * Description: descripbes the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

#ifndef dog_h
#defiine dog_h

/**
 * struct dog - Define 
 *@name: char1
 *@age: float
 *@owner: char2
 */

struct dog
{
	char *name;
	float*age
	char *owmer
};
typef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

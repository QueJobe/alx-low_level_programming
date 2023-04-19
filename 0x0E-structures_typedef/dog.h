#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new stuct of tpye dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner if the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dot-t - typedef of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*Header file dog.h*/

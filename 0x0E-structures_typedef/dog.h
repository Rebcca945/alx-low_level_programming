#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A new type describing a dog
 * @name: name of the dog
 * @age: age of the dog.
 * @owner: owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * a_dog - Typedef for struct dog
 */
typedef struct dog a_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
a_dog *new_dog(char *name, float age, char *owner);
void free_dog(a_dog *d);

#endif

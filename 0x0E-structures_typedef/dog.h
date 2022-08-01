#ifndef DOG
#define DOG

/**
 * struct dog - A new type describing a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
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

typedef sturct dog a_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
a_dog *new_dog(char *name, float age, char *owner);
void free(a_dog *d);

#endif

#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct datatype dog
 * @name: (string) name of dog
 * @age: (float) age of dog
 * @owner: (string)owner of dog
 *
 * Description: Struct Datatype used for storing information on
 * dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif/*DOG_H*/

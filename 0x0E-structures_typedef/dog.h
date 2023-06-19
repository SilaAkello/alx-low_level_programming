#ifndef DOG_H
#define DOG_H

/**
 * struct dog -is  a dog's basic info
 * @name: will be the First member
 * @age: must be the  Second member
 * @owner: t is obviously to be Third member
 *
 * Description: larger text  description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -This is the  typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif






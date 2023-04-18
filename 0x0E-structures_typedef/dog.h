#ifndef DOG_H
#define DOG_H


/**
 * struct dog - contains info of dog
 * @name: First dog member
 * @age: Second dog member
 * @owner: Third dog member
 *
 * Description: contains information on dog and all it's attribute
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for struct dog
 */
	typedef struct dog dog_t;


	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);


	#endif



#ifndef DOGI_H
#define DOGI_H
/**
 * struct dog - funtion firts
 * @name: thhis is a variable
 * @age: this is a variable
 * @owner: this is a variable
 *
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif

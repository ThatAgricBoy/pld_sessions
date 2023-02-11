#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
  * A function that creates a new structure and then copies and stores 
  * it in another new struct.
  * will return null if the function fails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *nename, *neowner;
	int lename, leowner;

	dog_t *doggo = malloc(sizeof(dog_t));
	if(doggo == NULL)
		return (NULL);
	strlen(name);
	lename = strlen(name);
	nename = malloc((lename + 1) * sizeof(char));
	if(nename == NULL)
	{
		free(doggo);
		return(NULL);
	}
	strcpy(nename, name);
	
	strlen(owner);

	leowner = strlen(owner);
	neowner = malloc((leowner +1) * sizeof(char));
	if(neowner == NULL)
	{
		free(nename);
		free(doggo);
		return (NULL);
	}
	strcpy(neowner, owner);
	
	doggo->name = nename;
	doggo->age = age;
	doggo->owner = neowner;
	
	return (doggo);
}

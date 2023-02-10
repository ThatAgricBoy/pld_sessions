#include <stdio.h>
#ifndef DOG_H
#define DOG_H
int main()
{
  struct dog
  {
    char *name;
    char *owmer;
    float age;
  };
}

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

#include <stdio.h>


/**
  * How to initialize structures using ordered method
  */

int main(void) 
{
  struct Person 
  {
    char firstName[25];
    char lastName[40];
    
    int age;
  };
  
  struct Person person1 =
  {"Ada", "Lovelace", 28};
 struct Person person2 =
 {"Marie", "Curie", 44};
 printf("%s %s\n", person1.firstName, person2.lastName);
}

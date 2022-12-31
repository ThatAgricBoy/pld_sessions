#include <stdio.h>

/**
  * changing the value of a variable using the dereferencing and dot notation 
  * using the arrow notation
  */


struct Person {
  char name[40];
  int age;
};

int main(void) {
  struct Person person1 = {"Martin", 57};
  struct Person person2 = {"Michelle", 27};
  struct Person* person1Pointer = &person1;
  struct Person* person2Pointer = &person2;

  (*person1Pointer).age += 1;
  person2Pointer->age += 10;

  printf("Hello my name is %s and I am %d years old.\n", person1.name, person1.age);
  printf("Hello my name is %s and I am %d years old.\n", person2.name, person2.age);
}

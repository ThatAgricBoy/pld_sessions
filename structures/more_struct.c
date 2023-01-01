#include <stdio.h>
struct Person {
  char name[40];
  int age;
  char school[40];
};

struct Person ageOne(struct Person friend1, struct Person* friend2Pointer) {
  friend1.age += 1;
  friend2Pointer->age +=1;
  return friend1;
}

int main(void) {
  struct Person myFriend = {"Martin", 57, "Unilorin"};
  struct Person myOtherFriend = {"Michelle", 27};
  
  myFriend = ageOne(myFriend, &myOtherFriend);

  printf("Hello my name is %s and I am %d years old. I graduated from %s.\n", myFriend.name, myFriend.age, myFriend.school);
  printf("Hello my name is %s and I am %d years old.\n", myOtherFriend.name, myOtherFriend.age);
}


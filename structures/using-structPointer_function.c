#include <stdio.h>
struct person {
  char name[40];
  int age;
};

// write your function below
struct person ageone(struct person friend1, struct person* friend2pointer) {
  friend1.age += 1;
  friend2pointer->age +=1;
  return friend1;
}

int main(void) {
  struct person myfriend = {"martin", 57};
  struct person myotherfriend = {"michelle", 27};
  // call your function below
  myfriend = ageone(myfriend, &myotherfriend);

  printf("hello my name is %s and i am %d years old.\n", myfriend.name, myfriend.age);
  printf("hello my name is %s and i am %d years old.\n", myotherfriend.name, myotherfriend.age);
}

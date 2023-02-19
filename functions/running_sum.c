#include <stdio.h>

int main(void)
{
 int sum = 0;
 int input;

 printf("Enter a series of integers (or any non-numeric character to stop):\n");

 while (scanf("%d", &input) == 1) {
 sum += input;
 printf("Running sum: %d\n", sum);
 }

 printf("Final sum: %d\n", sum);
 return 0;
}


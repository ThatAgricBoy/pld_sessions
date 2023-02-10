#include <stdio.h>

/**
  * This program shows how to iterate over an array using a for nested loop
  */

int main()
{

int B[4][4] = {{2,3,4,4}, {3,6,7,7}, {7,6,5,7}, {2,7,6,6}};
printf("This is Matric B: \n");
for (int i = 0; i < 4; i++)
{
    for(int j = 0; j < 4; j++)
    {
    printf("%d ", B[i][j]);
    }
    printf("\n");
}
return 0;
}

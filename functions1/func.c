#include <stdio.h>
/**
  * add2num - adds two numbers
  * int main(void) - entry
  *@Blessing: age
  *@John: age
  * return: Always 0
  */
void add2num(int Blessing, int John)
{
	printf("The mul of %d and %d is %d\n", Blessing, John, Blessing * John);
}


int main(void)
/*void main(void)*/
{
	add2num(20, 50);
	add2num(10, 5);
	add2num(30, 6);
	add2num(15, 13);
	add2num(22, 18);
	add2num(22, 11);
	return (0);
}

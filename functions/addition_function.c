#include <stdio.h>

//int add2num(int Blessing, int John);


int main(void)
{
        add2num(20, 50);
        add2num(10, 5);
        add2num(30, 6);
        add2num(15, 13);
        add2num(22, 18);
        add2num(22, 11);
	add2num(20, 30, 50);
        return 0;
}


int add2num(int a       , int b   )
{
        printf("The sum of %d + %d = %d\n", a       , b   , a        + b   );

	return 1;
}

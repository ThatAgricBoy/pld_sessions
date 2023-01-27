#include <stdio.h>

int main(int agrc, char *argv[])
{
	//go through each string in argv
	
	int argc = 0;
	
	int i = 0;
	while(i < argc)
	{
		printf("arg %d: %s\n", i, argv[i]);
				i++;
	}

	//lets make out our own array of strings

	char *states[] = {"California", "Oregon", "Washington", "Texas"};

	int num_states = 4;
	i = 0; //watch for this
	while(i < num_states)
	{
		printf("state %d: %s\n", i, states[i]);
		i++;

	}
	return 0;
}

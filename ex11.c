#include <stdio.h>

int main(int argc, char const *argv[])
{
	// go through each string in argv

	int i = 0;
	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	char *states[] = {
		"California", "Virginia",
		"Washington", "Texas"
	};

	int num_states = 4;
	i = 0; // watch for this
	while (i < num_states) {
		printf("State %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}
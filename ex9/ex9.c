#include <stdio.h>

int main(int argc, char *argv[]) {
	int numbers[4] = {0};
	char name[4] = {'a'};

	// first print raw
	printf("numbers: %d %d %d %d\n",
		numbers[0], numbers[1],
		numbers[2], numbers[3]);

	printf("Name each: %c %c %c %c\n",
		name[0], name[1],
		name[2], name[3]);

	printf("name: %s\n", name);

	// set up the nos.
	numbers[0] = 0;
	numbers[1] = 1;
	numbers[2] = 2;
	numbers[3] = 3;

	// set up the name
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[4] = '\0';

	// then print again
	printf("numbers: %d %d %d %d\n",
		numbers[0], numbers[1],
		numbers[2], numbers[3]);

	printf("Name each: %c %c %c %c\n",
		name[0], name[1],
		name[2], name[3]);
	
	printf("name: %s\n", name);

	// another way to chars
	char *another = "Zed";

	printf("another: %s\n", another);

	printf("Name each: %c %c %c %c\n",
		name[0], name[1],
		name[2], name[3]);

	return 0;
}




#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	time_t current_time;
	time(&current_time);
	printf("%l\n", current_time);
	return EXIT_SUCCESS;
}
#include<stdio.h>


void createfile(const char *);

in main(int argc, char const *argv[])
{
	createfile(argv[1]);
	return 0;
}
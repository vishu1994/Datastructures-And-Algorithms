#include<stdio.h>


void createfile(const char *);

int main(int argc, char const *argv[])
{
	createfile(argv[1]);
	return 0;
}
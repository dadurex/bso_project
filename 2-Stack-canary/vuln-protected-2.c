//gcc vuln-protected-2.c -o vuln-protected-2 -m32 -fstack-protector -z execstack

#include <stdio.h>
#include <string.h>

void vuln()
{
	char buffer[600];
	gets(buffer);
	printf(buffer);
	printf("\n");
	gets(buffer);
}

int main(int argc, char *argv[])
{
	vuln();
	return 0;
}

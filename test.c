#include <stdio.h>
#include <string.h>
#include <fcntl.h>
// comment
int main(void) {
	int fd = open("Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC, 0600);
	dprintf(fd, "BONJOUR JE SUIS LE PAIN");
}
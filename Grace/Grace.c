#include <stdio.h>
#include <fcntl.h>
// comment
#define A a
#define B b
#define T() int main() { int fd = open("Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC, 0600); char *s = "#include <stdio.h>%c#include <fcntl.h>%c// comment%c#define A a%c#define B b%c#define T() int main() { int fd = open(%cGrace_kid.c%c, O_WRONLY | O_CREAT | O_TRUNC, 0600); char *s = %c%s%c; dprintf(fd,s,10,10,10,10,10,34,34,34,s,34,10);}%cT();"; dprintf(fd,s,10,10,10,10,10,34,34,34,s,34,10);}
T();
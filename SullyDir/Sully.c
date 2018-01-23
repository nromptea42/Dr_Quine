#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#define FLAGS O_WRONLY | O_CREAT | O_TRUNC
#define NAME "Sully_%d.c"
#define COMPILE "clang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d"
#define SOURCE "#include <unistd.h>%c#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%c#define FLAGS O_WRONLY | O_CREAT | O_TRUNC%c#define NAME %cSully_%cd.c%c%c#define COMPILE %cclang -Wall -Wextra -Werror Sully_%cd.c -o Sully_%cd%c%c#define SOURCE %c%s%c%cint main() { int fd;%cint i = %d;%cchar *f, *compile, *exec; if (i < 0) { exit(1); } asprintf(&f, NAME, i); while (access(f, F_OK)!=-1) { i--; if (i < 0) { exit(1); } asprintf(&f, NAME, i); } if ((fd = open(f, FLAGS, 0600)) == -1) { exit(1); } char *s = SOURCE;%cdprintf(fd, s, 10, 10, 10, 10, 10, 34, 37, 34, 10, 34, 37, 37, 34, 10, 34, s, 34, 10, 10, (i == -1) ? 0 : i, 10, 10, 34, 37, 34, 10); asprintf(&compile, COMPILE, i, i); asprintf(&exec, %c./Sully_%cd%c, i); system(compile); system(exec); }%c"
int main() { int fd;
int i = 5;
char *f, *compile, *exec; if (i < 0) { exit(1); } asprintf(&f, NAME, i); while (access(f, F_OK)!=-1) { i--; if (i < 0) { exit(1); } asprintf(&f, NAME, i); } if ((fd = open(f, FLAGS, 0600)) == -1) { exit(1); } char *s = SOURCE;
dprintf(fd, s, 10, 10, 10, 10, 10, 34, 37, 34, 10, 34, 37, 37, 34, 10, 34, s, 34, 10, 10, (i == -1) ? 0 : i, 10, 10, 34, 37, 34, 10); asprintf(&compile, COMPILE, i, i); asprintf(&exec, "./Sully_%d", i); system(compile); system(exec); }

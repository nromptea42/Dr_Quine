#include <stdio.h>
#include <string.h>

// comment

void fc() {};

int main(void) {
// comment 2
fc();
char *s = strdup("#include <stdio.h>%c#include <string.h>%c%c// comment%c%cvoid fc() {};%c%cint main(void) {%c// comment 2%cfc();%cchar *s = strdup(%c%s%c);%cprintf(s,10,10,10,10,10,10,10,10,10,10,34,s,34,10,10,10,10);%creturn 0;%c}");
printf(s,10,10,10,10,10,10,10,10,10,10,34,s,34,10,10,10,10);
return 0;
}
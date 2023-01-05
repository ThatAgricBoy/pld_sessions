#include <stdio.h>
#include <string.h>
int main(void)
{
char* p = "Hello World!";
for(int i = 0; i < strlen(p); i++)
printf("%s\n", p);
}

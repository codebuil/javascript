#include<stdio.h>
char *hello(){
	return "\ec\e[42;30m\nhello world....\n";
}
int main(){
	puts(hello());
	return 0;
}

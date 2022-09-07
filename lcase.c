//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
  char i[]={"HELLO WORLD...\n"};
char *hello(){ 
	char *ii;
	ii=i;
	return ii;
}
char *lcases(){
	int ff=0;
	char c=0;
	char *cc;
	for(ff=0;ff<strlen(i);ff++){
		c=i[ff];
		if(c>65 && c<91){
			c=c+32;
			i[ff]=c;
		}
	}
	cc=i;
	return cc;
}


int main(){
	int d=0;
	int e=0;
	printf("\033[42;37m\n");
	puts(lcases());
	return 0;
}

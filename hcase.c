//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
  char i[]={"hello world...\n"};
char *hello(){ 
	char *ii;
	ii=i;
	return ii;
}
char *hcases(){
	int ff=0;
	char c=0;
	char *cc;
	for(ff=0;ff<strlen(i);ff++){
		c=i[ff];
		if(c>96 && c<123){
			c=c-32;
			i[ff]=c;
		}
	}
	cc=i;
	return cc;
}



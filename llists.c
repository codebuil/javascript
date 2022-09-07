//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
  char i[1024];
char *hello(){
	i[0]=0; 
	char *ii;
	ii=i;
	return ii;
}
char *llists(){
	int ff=0;
	char c=0;
	char *cc;
	char ii[50];
	cc=i;
	i[0]=0; 
	strcat(cc,"\n<br>Title\n<br>");
	for(ff=0;ff<16;ff++){
		sprintf(ii,"\n<br>%d item\n<br>",ff);
		strcat(cc,ii);
	}
	return cc;
}


int main(){
	int d=0;
	int e=0;
	printf("\033[42;37m\n");
	puts(llists());
	return 0;
}

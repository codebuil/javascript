#include<stdio.h>
char i[6000];
char *llists(){
	char *c;
	char *c1="\n<br>";
	char *c4=" item.\n<br>";
	int ii;
	int indexs=0;
	char r[20]="0\0\0";
	char *cc;
	int f;
	i[0]=0;
	for(f=0;f<16;f++){
		c=c1;
		for (ii=0;ii<5000;ii++){
			if(c[ii]==0){
				i[indexs+ii]=0;
				indexs=indexs+ii;
				ii=6000;
			}else{
				i[indexs+ii]=c[ii];
			}
		}
		r[0]='0'+f;
		if(f>9)r[0]='A'+f-10;
		c=r;
		for (ii=0;ii<5000;ii++){
			if(c[ii]==0){
				i[indexs+ii]=0;
				indexs=indexs+ii;
				ii=6000;
			}else{
				i[indexs+ii]=c[ii];
			}
		}
		c=c4;
		for (ii=0;ii<5000;ii++){
			if(c[ii]==0){
				i[indexs+ii]=0;
				indexs=indexs+ii;
				ii=6000;
			}else{
				i[indexs+ii]=c[ii];
			}
		}
	}
	cc=i;
	return cc;
}
int main(){
	printf("\e[42;30m\n");
	printf(llists());
	return 0;
}

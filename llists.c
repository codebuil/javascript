#include<stdio.h>
char i[6000];
int strcopys(char *c,int indexs){
		int ii;
		for (ii=0;ii<5000;ii++){
			if(c[ii]==0){
				i[indexs+ii]=0;
				return indexs+ii;
			}else{
				i[indexs+ii]=c[ii];
			}
		}
		return indexs;
}
char *llists(){
	int indexs=0;
	char r[20]="0\0\0";
	char *cc;
	int f;
	i[0]=0;
	for(f=0;f<16;f++){
		indexs=strcopys("\n<br>",indexs);
		r[0]='0'+f;
		if(f>9)r[0]='A'+f-10;
		indexs=strcopys(r,indexs);
		indexs=strcopys(" item.\n<br>",indexs);
	}
	cc=i;
	return cc;
}
int main(){
	printf("\e[42;30m\n");
	printf(llists());
	return 0;
}

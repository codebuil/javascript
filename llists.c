//https://wasdk.github.io/WasmFiddle/
char *strcopys(char *c,char *cc){
int ff=0;
char *ccc;
	ccc=c+0;
	for(ff=0;ff<6000;ff++){
		
		if (cc[ff]==0){
			ccc=c+ff;
			ff=7000;
			}else{
				c[ff]=cc[ff];
				}
	}

	return ccc;
	}
char *llists(){
	int ff=0;
	char c=0;
	char *cc;
	char ii[5000];
	cc=ii;
	ii[0]=0; 
	cc=strcopys(cc,"\n<br>Title\n<br>");
	for(ff=0;ff<16;ff++){
		cc=strcopys(cc,"\n<br>%d item\n<br>");
		
	}
	cc[1]=0;
	cc=ii;
	return cc;
}


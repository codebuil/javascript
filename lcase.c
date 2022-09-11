char i[1024]="HELLO WORLD\n\0";
char *lcases(){
	int ff=0;
	char c=0;
	char *cc;
     do{
		c=i[ff];
		if(c==0)goto lcaseescape;
		if(c>64 && c<65+27){
			c=c+32;
			i[ff]=c;
		}
		ff++;
		
	}while(1);
	lcaseescape:
	cc=i;
	return cc;
}



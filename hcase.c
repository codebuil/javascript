char i[1024]="hello world\n\0";
char *hcases(){
	int ff=0;
	char c=0;
	char *cc;
     do{
		c=i[ff];
		if(c==0)goto hcaseescape;
		if(c>96 && c<123){
			c=c-32;
			i[ff]=c;
		}
		ff++;
		
	}while(1);
	hcaseescape:
	cc=i;
	return cc;
}



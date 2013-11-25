#include<stdio.h>
int main(){
	FILE *filep;
	char fname[100];
	filep=freopen("f.txt","r",stdin);
	while(gets(fname)){
		system(fname);
	}
	fclose(filep);
	return 0;
}

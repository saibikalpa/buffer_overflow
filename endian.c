#include <stdio.h>
union s{
	int n;
	char b;
}x;
void main(){
	x.n = 0x4142;
	if(x.b == 0x42){
		printf("Little Endian\n");
	}
	else{
		printf("Big Endian\n");
	}
}

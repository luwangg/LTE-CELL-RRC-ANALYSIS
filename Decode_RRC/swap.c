#include <stdio.h>
 
unsigned char ascii2hex(char num)
{
	switch(num)
	{
		case '0':
			return 0x00;
		case '1':
			return 0x01;
		case '2':
			return 0x02;
		case '3':
			return 0x03;
		case '4':
			return 0x04;
		case '5':
			return 0x05;
		case '6':
			return 0x06;
		case '7':
			return 0x07;
		case '8':
			return 0x08;
		case '9':
			return 0x09;
		case 'a':
			return 0x0a;
		case 'b':
			return 0x0b;
		case 'c':
			return 0x0c;
		case 'd':
			return 0x0d;
		case 'e':
			return 0x0e;
		case 'f':
			return 0x0f;
		default:
			return 0;
	}
}

int main(int ac, char *av[])
{
	FILE *fi,*fo;
	unsigned char c;
	char hex_high;
	char hex_low;
	int flag = 0;
	unsigned char data[6];
	unsigned char data1,data2,data3,data4,data5,data6;
	int change_big_little_flag = 0;
	
	fi=fopen("input","r");
	
	while(fscanf(fi,"%c",&c)!=EOF)
	{
		printf("0x%02x,",c);
	}
    
	fclose(fi);
}

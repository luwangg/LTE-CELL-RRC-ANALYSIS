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

unsigned short get_Fpga_Word(unsigned char num1, unsigned char num2)
{
	unsigned short data = 0;
	data = num2;
	data = ( (data&0xff) << 8) + num1;
	return data;
}

unsigned char get_Fpga_Byte(unsigned char num1)
{
	unsigned char data = 0;
	data = num1;
	return data;
}

int get_Fpga_DWord(unsigned char num1, unsigned char num2 ,unsigned char num3, unsigned char num4)
{
	int data = 0;
	int data1 = 0;
	int data2 = 0;
	int data3 = 0;
	int data4 = 0;
	
	
	data1 = num1;
	data2 = num1;
	data3 = num1;
	data4 = num1;
	
	data = (data1 << 16) + (data2 << 24) + data3 + (data4 << 8);
	return data;
}

int main(int ac, char *av[])
{
	FILE *fi,*fo;
	char c;
	char hex_high;
	char hex_low;
	int flag = 0;
	unsigned char num;
	unsigned char num1,num2;
	int change_big_little_flag = 0;
	unsigned char data_buffer[1500] = {0};
	int index =  0;
	int i;
	unsigned short fpgaChnlNo = 0;
	unsigned short freq = 0;
	int sfn = 0;
	unsigned short msgNum = 0;
	unsigned char msgType = 0;
	unsigned short msgBitLen = 0;
	unsigned short msgLen = 0;
	unsigned short crcStat = 0;
	unsigned short tc_rnti = 0;
	int len_skip = 0;
	
	fi=fopen("input","r");
//	fo=fopen("output.per","w");
	
	while(fscanf(fi,"%c",&c)!=EOF)
	{
		if( flag == 0 )
		{
			num = 0;
			flag = 1;
			hex_high = c;
			num = ascii2hex(hex_high) << 4;
		}else{
			flag = 0;
			hex_low = c;
			num = ascii2hex(hex_low) + num;
			data_buffer[index] = num;
			index++;
		}
	}
//	for(i=0;i<150;i++)
//	printf("%x ",data_buffer[i]);
	
	fpgaChnlNo = get_Fpga_Word(data_buffer[50],data_buffer[51]);
	freq = get_Fpga_Word(data_buffer[52],data_buffer[53]);
	sfn = get_Fpga_DWord(data_buffer[54],data_buffer[55],data_buffer[56],data_buffer[57]);
	msgNum = get_Fpga_Word(data_buffer[58],data_buffer[59]);
	
	printf("fpgaChnlNo = %d\r\n",fpgaChnlNo);
	printf("freq = %d\r\n",freq);
	printf("sfn = 0x%x\r\n",sfn);
	printf("msgNum = %d\r\n",msgNum);
	
	for(i = 0; i < msgNum; i++)
    {
        msgBitLen = get_Fpga_Word(data_buffer[60+len_skip],data_buffer[61+len_skip]);
        printf("msgBitLen = %d\r\n",msgBitLen);
        msgType = get_Fpga_Byte(data_buffer[62+len_skip]);
        printf("msgType = %d\r\n",msgType);
        crcStat = get_Fpga_Byte(data_buffer[63+len_skip]);
        printf("crcStat = %d\r\n",crcStat);
        tc_rnti = get_Fpga_Word(data_buffer[64+len_skip],data_buffer[65+len_skip]);
		printf("tc_rnti = %d\r\n",tc_rnti);
		
		msgBitLen =16 * ( msgBitLen / 16 + ((0 == msgBitLen % 16) ? 0 : 1));
		msgLen = msgBitLen >> 3;
		if(msgBitLen >= 2048)
		{
			printf("Length Error.\r\n");
			fclose(fi);
			return;
		}
		if((msgLen & 0x1) == 1)
		{
			msgLen += 1;
		}
		
		len_skip = len_skip + msgLen + 6;
	}
	#if 0
	while(fscanf(fi,"%c",&c)!=EOF)
	{
		if( change_big_little_flag == 0 )
		{
			//printf("change_big_little_flag=0\r\n");
			if( flag == 0 )
			{
				num = 0;
				flag = 1;
				hex_high = c;
				num = ascii2hex(hex_high) << 4;
			}else{
				flag = 0;
				hex_low = c;
				num = ascii2hex(hex_low) + num;
				num2 = num;
				change_big_little_flag = 1;
				//printf("%x\r\n",num);
				//fwrite(&num,1,1,fo);
			}
		}else{
			//printf("change_big_little_flag=1\r\n");
			if( flag == 0 )
			{
				num = 0;
				flag = 1;
				hex_high = c;
				num = ascii2hex(hex_high) << 4;
			}else{
				flag = 0;
				hex_low = c;
				num = ascii2hex(hex_low) + num;
				num1 = num;
				change_big_little_flag = 0;
				//printf("%x\r\n",num);
				//fwrite(&num,1,1,fo);
				fwrite(&num1,1,1,fo);
				fwrite(&num2,1,1,fo);
				data_buffer[index] = num1
			}
		}
	}
    #endif
	fclose(fi);
//	fclose(fo);
}

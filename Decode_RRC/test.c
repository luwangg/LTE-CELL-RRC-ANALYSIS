#include <stdio.h>

typedef struct _MsgIOStream
{
    char *buf; /* 消息缓存区地址 */
    unsigned short curPos;  /* 指针的当前位置(bit) */
    unsigned short bufLen; /* 缓存区数据长度 */
} MsgIOStream;

int getNbit2Byte(MsgIOStream *pMe, unsigned short len, unsigned char *value);
MsgIOStream msgIStream = {0};

char stream[]={0x82,0x1c,0x31,0x1a,0x6f,0xe0,0xa2,0x6c,0x34};

int main(int argc,char *argv[])
{
	MsgIOStream *pMe = &msgIStream;
	unsigned char index;
	pMe->buf = stream;
	pMe->curPos = 8;
	pMe->bufLen = 5;
	
	getNbit2Byte(pMe, 8, &index);
	printf("index = 0x%x \n",index);
	
	return 0;
}

int getNbit2Byte(MsgIOStream *pMe, unsigned short len, unsigned char *value)
{
    unsigned short byteIndex = 0;
    unsigned short bitIndex = 0;
    unsigned short temp = 0;

    /* 大于8bit，错误 */
    if(len > 8)
        return -1;

    /* 长度越界，错误 */
    if(pMe->curPos + len > pMe->bufLen * 8)
        return -1;

    byteIndex = pMe->curPos / 8;
    bitIndex = pMe->curPos % 8;

    temp = pMe->buf[byteIndex];

    if(bitIndex + len > 8)
    {
        temp = (temp << 8);
        temp = temp + (unsigned char)(pMe->buf[byteIndex + 1]);
    }
    else
    {
        temp = temp << 8;
    }

    temp = temp << bitIndex;
    temp = temp >> (16 - len);

    pMe->curPos += len;
    *value = (unsigned char)temp;

    return 0;
}

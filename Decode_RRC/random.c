#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(int argc,char *argv[])
{
	int minRandomNum = 0;
	int maxRandomNum = 0;
	int RandOutput = 0;
	int numDiff = 0;
	
	if(argc <= 2)
	{
		return 0;
	}
	srand((int)time(0));
	minRandomNum = atoi(argv[1]);
	maxRandomNum = atoi(argv[2]);
	numDiff = maxRandomNum - minRandomNum;
	RandOutput = (int)(rand()%numDiff) + minRandomNum;
	printf("%d \n",RandOutput);
	//printf("minRandomNum = %d \n",minRandomNum);
	//printf("maxRandomNum = %d \n",maxRandomNum);
	
	return 0;
}

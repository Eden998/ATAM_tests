#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -430300388860789895);
	printf("Test 285 output: %hi\n",res);
	assert(res == 402);
	return 0;
}
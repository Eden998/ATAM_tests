#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', -26);
	printf("Test 246 output: %hi\n",res);
	assert(res == 461);
	return 0;
}
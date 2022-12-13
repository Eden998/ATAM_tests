#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('=', -91);
	printf("Test 263 output: %hi\n",res);
	assert(res == 626);
	return 0;
}
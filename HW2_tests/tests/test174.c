#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('&', 67412341806226549);
	printf("Test 174 output: %hi\n",res);
	assert(res == 3);
	return 0;
}
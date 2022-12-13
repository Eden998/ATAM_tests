#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', 72);
	printf("Test 60 output: %hi\n",res);
	assert(res == 2);
	return 0;
}
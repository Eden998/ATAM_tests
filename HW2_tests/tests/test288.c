#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 76);
	printf("Test 288 output: %hi\n",res);
	assert(res == 50);
	return 0;
}
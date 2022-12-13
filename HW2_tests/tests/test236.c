#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -17);
	printf("Test 236 output: %hi\n",res);
	assert(res == 161);
	return 0;
}
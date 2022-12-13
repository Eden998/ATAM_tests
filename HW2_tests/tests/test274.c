#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -850019436933214567);
	printf("Test 274 output: %hi\n",res);
	assert(res == 748);
	return 0;
}
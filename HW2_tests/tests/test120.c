#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('?', -931238422389060983);
	printf("Test 120 output: %hi\n",res);
	assert(res == 14);
	return 0;
}
#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', 34);
	printf("Test 280 output: %hi\n",res);
	assert(res == 92);
	return 0;
}
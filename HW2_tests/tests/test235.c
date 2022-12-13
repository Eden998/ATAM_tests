#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', 13);
	printf("Test 235 output: %hi\n",res);
	assert(res == 94);
	return 0;
}
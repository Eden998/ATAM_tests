#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', 8);
	printf("Test 281 output: %hi\n",res);
	assert(res == 375);
	return 0;
}
#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(' ', 105098221688834601);
	printf("Test 190 output: %hi\n",res);
	assert(res == 5);
	return 0;
}
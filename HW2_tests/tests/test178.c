#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('(', 298753561523199690);
	printf("Test 178 output: %hi\n",res);
	assert(res == 0);
	return 0;
}
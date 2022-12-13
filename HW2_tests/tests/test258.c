#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -262283649957631364);
	printf("Test 258 output: %hi\n",res);
	assert(res == 319);
	return 0;
}
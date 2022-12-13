#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -503431417198478209);
	printf("Test 185 output: %hi\n",res);
	assert(res == 11);
	return 0;
}
#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', -654926470798793651);
	printf("Test 139 output: %hi\n",res);
	assert(res == 14);
	return 0;
}
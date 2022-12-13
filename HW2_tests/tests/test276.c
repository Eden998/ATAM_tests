#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('%', -77648724884211431);
	printf("Test 276 output: %hi\n",res);
	assert(res == 146);
	return 0;
}
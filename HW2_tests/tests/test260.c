#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -764644001035544338);
	printf("Test 260 output: %hi\n",res);
	assert(res == 382);
	return 0;
}
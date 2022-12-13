#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('+', -269514005672061038);
	printf("Test 286 output: %hi\n",res);
	assert(res == 372);
	return 0;
}
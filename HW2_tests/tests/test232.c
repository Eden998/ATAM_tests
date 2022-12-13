#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(' ', -74);
	printf("Test 232 output: %hi\n",res);
	assert(res == 228);
	return 0;
}
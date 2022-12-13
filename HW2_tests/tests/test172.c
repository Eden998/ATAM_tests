#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -945946040845103244);
	printf("Test 172 output: %hi\n",res);
	assert(res == 14);
	return 0;
}
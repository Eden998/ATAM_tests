#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(' ', 528499303031170297);
	printf("Test 256 output: %hi\n",res);
	assert(res == 105);
	return 0;
}
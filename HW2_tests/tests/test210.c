#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('*', -660691984932807709);
	printf("Test 210 output: %hi\n",res);
	assert(res == 400);
	return 0;
}
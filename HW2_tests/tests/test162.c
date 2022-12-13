#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', -412913257824418430);
	printf("Test 162 output: %hi\n",res);
	assert(res == 5);
	return 0;
}
#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', 41);
	printf("Test 4 output: %hi\n",res);
	assert(res == 4);
	return 0;
}
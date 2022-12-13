#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', 58);
	printf("Test 204 output: %hi\n",res);
	assert(res == 106);
	return 0;
}
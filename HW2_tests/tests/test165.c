#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', -651555079198959869);
	printf("Test 165 output: %hi\n",res);
	assert(res == 17);
	return 0;
}
#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', 921729275579646063);
	printf("Test 181 output: %hi\n",res);
	assert(res == 0);
	return 0;
}
#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', 3745596558851211);
	printf("Test 131 output: %hi\n",res);
	assert(res == 1);
	return 0;
}
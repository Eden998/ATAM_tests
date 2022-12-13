#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('_', 825445104284780030);
	printf("Test 266 output: %hi\n",res);
	assert(res == 13);
	return 0;
}
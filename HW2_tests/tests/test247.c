#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above(';', 473542036832135420);
	printf("Test 247 output: %hi\n",res);
	assert(res == 193);
	return 0;
}
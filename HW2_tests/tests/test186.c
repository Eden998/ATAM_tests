#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', 808420139219527082);
	printf("Test 186 output: %hi\n",res);
	assert(res == 4);
	return 0;
}
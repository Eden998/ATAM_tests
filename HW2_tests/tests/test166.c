#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', -485050453683830481);
	printf("Test 166 output: %hi\n",res);
	assert(res == 9);
	return 0;
}
#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('<', -78000208101244845);
	printf("Test 289 output: %hi\n",res);
	assert(res == 77);
	return 0;
}
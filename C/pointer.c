#include <stdio.h>
#include "pointer.h"

void addOrSub() {
	printf("sizeof(char)= %d\n", sizeof(char));
	printf("sizeof(int)= %d\n", sizeof(int));
	char c[5] = {'h','e','l','l','o'};
	printf("%c\n", c[0]);
	char* p = c;
	printf("%p\n", p+1);
	//*(p + n)µÈ¼ÛÓÚc[n]
	printf("%c\n", *(p + 4));
	printf("%c\n", c[4]);
	p++;
	printf("%p\n", p);


	int i[5] = { 1,2,3,4,5 };
	int* q = i;
	printf("%p\n", q);
	q++;
	printf("%p\n", q);
}
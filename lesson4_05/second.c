#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printfStr() {
	char a[50];
	int b[10] = {0};
	int i=0;
	printf("请输入一行字符串, 以回车结束!\n");
	gets(a);
	while(a[i]) {
		switch (a[i]) {
			case '0':
				b[0]++;
				break;
			case '1':
				b[1]++;
				break;
			case '2':
				b[2]++;
				break;
			case '3':
				b[3]++;
				break;
			case '4':
				b[4]++;
				break;
			case '5':
				b[5]++;
				break;
			case '6':
				b[6]++;
				break;
			case '7':
				b[7]++;
				break;
			case '8':
				b[8]++;
				break;
			case '9':
				b[9]++;
				break;
			default :
				break;
		}
		i++;
	}
	for(i=0; i<10; i++) {
		printf("%d 的个数为： %d\n", i, b[i]);
	}
}

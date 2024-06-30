#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int top; /*栈顶指针*/
} SeqStack; /*定义顺序栈*/

typedef struct {
	ElemType data[MaxSize];
	int front,rear; /*队头和队尾指针*/
} SeqQueue; /*定义顺序队列*/

void InitStack(SeqStack *s); /*初始化栈*/

int StackEmpty(SeqStack *s); /*判栈空*/

int StackFull(SeqStack *s); /*判栈满*/

void Push(SeqStack *s,ElemType x); /*进栈*/

ElemType Pop(SeqStack *s); /*出栈*/

ElemType GetTop(SeqStack *s); /*取栈顶元素*/

void DispStack(SeqStack *s); /*依次输出从栈顶到栈底的元素*/

void DispBottom(SeqStack *s); /*输出栈底元素*/

void InitQueue(SeqQueue *sq); /*初始化队列*/

int QueueEmpty(SeqQueue *sq); /*判队空*/

void InQueue(SeqQueue *sq,ElemType x); /*循环队列入队*/

ElemType OutQueue(SeqQueue *sq,ElemType x); /*循环队列出队*/

ElemType GetQueue(SeqQueue *sq);/*取队头元素*/

int main(int argc, char *argv[]) {
	SeqStack *s;

	SeqQueue *sq;

	ElemType x;

	int n,i;

	printf("(1)初始化栈s\n");

	s=(SeqStack *)malloc(sizeof(SeqStack));

	InitStack(s);

	printf("(2)栈为%s\n",(StackEmpty(s)?"空":"非空"));

	printf("(3)输入要进栈的数据个数：");

	scanf("%d",&n);

	printf("依次输入进栈的%d个整数：",n);

	/*数据依次进栈*/
	for(i=0; i<n; i++) {
		scanf("%d",&x);
		Push(s,x);
	}

	printf("(4)栈为%s\n",(StackEmpty(s)?"空":"非空"));

	printf("(5)从栈顶到栈底的元素依次为:");
	DispStack(s);

	printf("(6)栈底元素为:");
	DispBottom(s);

	printf("(7)初始化队列sq\n");

	sq=(SeqQueue *)malloc(sizeof(SeqQueue));

	InitQueue(sq);

	printf("(8)队列为%s\n",(QueueEmpty(sq)?"空":"非空"));

	printf("(9)出栈/入队的元素依次为:");

	/*依次出栈进入临时队列*/
	while(!StackEmpty(s)) {

		x=Pop(s); /*出栈*/

		printf("%d ",x);

		InQueue(sq,x); /*入队*/
	}

	printf("\n");
	printf("(10)栈为%s,",(StackEmpty(s)?"空":"非空"));
	printf("队列为%s\n",(QueueEmpty(sq)?"空":"非空"));

	//依次出队进入原初始栈，实现栈的倒置
	printf("(11)出队/进栈的元素依次为:");

	while(!QueueEmpty(sq)) {

		x=OutQueue(sq,x); /*出队*/

		printf("%d ",x);

		Push(s,x); /*进栈*/
	}

	printf("\n");

	printf("(12)栈为%s,",(StackEmpty(s)?"空":"非空"));

	printf("队列为%s\n",(QueueEmpty(sq)?"空":"非空"));

	printf("(13)从栈顶到栈底的元素依次为:");
	DispStack(s);

	printf("(14)栈底元素为:");
	DispBottom(s);
	free(s);
	free(sq);
	
	return 0;
}

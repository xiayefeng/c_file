#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int front,rear; /*队头和队尾指针*/
} SeqQueue; /*定义顺序队列*/

/*初始化队列*/
void InitQueue(SeqQueue *sq) {
	sq->front=sq->rear=0;
}

/*判队空*/
int QueueEmpty(SeqQueue *sq) {
	if(sq->rear==sq->front)
		return 1;
	else
		return 0;
}

/*循环队列入队*/
void InQueue(SeqQueue *sq, ElemType x) {
	if ((sq->rear+1)%MaxSize==sq->front) { /*队满*/
		printf("循环队列已满！\n");
		exit(1);
	}

	sq->data[sq->rear]=x;

	sq->rear=(sq->rear+1)%MaxSize;
}

/*循环队列出队*/
ElemType OutQueue(SeqQueue *sq, ElemType x) {
	if(QueueEmpty(sq)) { /*队空*/
		printf("循环队列已空，不能进行出队操作！\n");
		exit(1);
	} else {

		x=sq->data[sq->front];

		sq->front=(sq->front+1)%MaxSize;

		return x;
	}
}

/*取队头元素*/
ElemType GetQueue(SeqQueue *sq) {
	if(QueueEmpty(sq)) {
		printf("队列已空，不能进行出队操作！\n");
		exit(1);
	}
	return sq->data[sq->front];
}

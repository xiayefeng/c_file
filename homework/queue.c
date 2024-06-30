#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int front,rear; /*��ͷ�Ͷ�βָ��*/
} SeqQueue; /*����˳�����*/

/*��ʼ������*/
void InitQueue(SeqQueue *sq) {
	sq->front=sq->rear=0;
}

/*�жӿ�*/
int QueueEmpty(SeqQueue *sq) {
	if(sq->rear==sq->front)
		return 1;
	else
		return 0;
}

/*ѭ���������*/
void InQueue(SeqQueue *sq, ElemType x) {
	if ((sq->rear+1)%MaxSize==sq->front) { /*����*/
		printf("ѭ������������\n");
		exit(1);
	}

	sq->data[sq->rear]=x;

	sq->rear=(sq->rear+1)%MaxSize;
}

/*ѭ�����г���*/
ElemType OutQueue(SeqQueue *sq, ElemType x) {
	if(QueueEmpty(sq)) { /*�ӿ�*/
		printf("ѭ�������ѿգ����ܽ��г��Ӳ�����\n");
		exit(1);
	} else {

		x=sq->data[sq->front];

		sq->front=(sq->front+1)%MaxSize;

		return x;
	}
}

/*ȡ��ͷԪ��*/
ElemType GetQueue(SeqQueue *sq) {
	if(QueueEmpty(sq)) {
		printf("�����ѿգ����ܽ��г��Ӳ�����\n");
		exit(1);
	}
	return sq->data[sq->front];
}

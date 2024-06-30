#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int top; /*ջ��ָ��*/
} SeqStack; /*����˳��ջ*/

typedef struct {
	ElemType data[MaxSize];
	int front,rear; /*��ͷ�Ͷ�βָ��*/
} SeqQueue; /*����˳�����*/

void InitStack(SeqStack *s); /*��ʼ��ջ*/

int StackEmpty(SeqStack *s); /*��ջ��*/

int StackFull(SeqStack *s); /*��ջ��*/

void Push(SeqStack *s,ElemType x); /*��ջ*/

ElemType Pop(SeqStack *s); /*��ջ*/

ElemType GetTop(SeqStack *s); /*ȡջ��Ԫ��*/

void DispStack(SeqStack *s); /*���������ջ����ջ�׵�Ԫ��*/

void DispBottom(SeqStack *s); /*���ջ��Ԫ��*/

void InitQueue(SeqQueue *sq); /*��ʼ������*/

int QueueEmpty(SeqQueue *sq); /*�жӿ�*/

void InQueue(SeqQueue *sq,ElemType x); /*ѭ���������*/

ElemType OutQueue(SeqQueue *sq,ElemType x); /*ѭ�����г���*/

ElemType GetQueue(SeqQueue *sq);/*ȡ��ͷԪ��*/

int main(int argc, char *argv[]) {
	SeqStack *s;

	SeqQueue *sq;

	ElemType x;

	int n,i;

	printf("(1)��ʼ��ջs\n");

	s=(SeqStack *)malloc(sizeof(SeqStack));

	InitStack(s);

	printf("(2)ջΪ%s\n",(StackEmpty(s)?"��":"�ǿ�"));

	printf("(3)����Ҫ��ջ�����ݸ�����");

	scanf("%d",&n);

	printf("���������ջ��%d��������",n);

	/*�������ν�ջ*/
	for(i=0; i<n; i++) {
		scanf("%d",&x);
		Push(s,x);
	}

	printf("(4)ջΪ%s\n",(StackEmpty(s)?"��":"�ǿ�"));

	printf("(5)��ջ����ջ�׵�Ԫ������Ϊ:");
	DispStack(s);

	printf("(6)ջ��Ԫ��Ϊ:");
	DispBottom(s);

	printf("(7)��ʼ������sq\n");

	sq=(SeqQueue *)malloc(sizeof(SeqQueue));

	InitQueue(sq);

	printf("(8)����Ϊ%s\n",(QueueEmpty(sq)?"��":"�ǿ�"));

	printf("(9)��ջ/��ӵ�Ԫ������Ϊ:");

	/*���γ�ջ������ʱ����*/
	while(!StackEmpty(s)) {

		x=Pop(s); /*��ջ*/

		printf("%d ",x);

		InQueue(sq,x); /*���*/
	}

	printf("\n");
	printf("(10)ջΪ%s,",(StackEmpty(s)?"��":"�ǿ�"));
	printf("����Ϊ%s\n",(QueueEmpty(sq)?"��":"�ǿ�"));

	//���γ��ӽ���ԭ��ʼջ��ʵ��ջ�ĵ���
	printf("(11)����/��ջ��Ԫ������Ϊ:");

	while(!QueueEmpty(sq)) {

		x=OutQueue(sq,x); /*����*/

		printf("%d ",x);

		Push(s,x); /*��ջ*/
	}

	printf("\n");

	printf("(12)ջΪ%s,",(StackEmpty(s)?"��":"�ǿ�"));

	printf("����Ϊ%s\n",(QueueEmpty(sq)?"��":"�ǿ�"));

	printf("(13)��ջ����ջ�׵�Ԫ������Ϊ:");
	DispStack(s);

	printf("(14)ջ��Ԫ��Ϊ:");
	DispBottom(s);
	free(s);
	free(sq);
	
	return 0;
}

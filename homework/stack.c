#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int top; /*ջ��ָ��*/
} SeqStack; /*����˳��ջ*/

/*��ʼ��ջ*/
void InitStack(SeqStack *s) {
	s->top=-1;
}

/*��ջ��*/

int StackEmpty(SeqStack *s) {
	if(s->top==-1) {
		return 1; /*ջ�շ���1 */
	} else {
		return 0; /*���򷵻�0 */
	}
}

/*��ջ��*/
int StackFull(SeqStack *s) {
	if(s->top==MaxSize-1)
		return 1; /*ջ������1 */
	else
		return 0; /*���򷵻�0 */
}

/*��ջ*/
void Push(SeqStack *s,ElemType x) {
	if (StackFull(s)) {
		printf("ջ���������\n");
		exit(1);
	}
	s->top++;
	s->data[s->top]=x;
}

/*��ջ*/
ElemType Pop(SeqStack *s) {
	if(StackEmpty(s)) {
		printf("ջ�������\n");
		exit(1);
	}

	s->top--;

	return s->data[s->top+1]; /*����ԭջ��Ԫ��ֵ*/
}

/*ȡջ��Ԫ��*/
ElemType GetTop(SeqStack *s) {
	if(StackEmpty(s)) {
		printf("ջ�������\n");
		exit(1);
	}
	return s->data[s->top];
}

/*���������ջ����ջ�׵�Ԫ��*/
void DispStack(SeqStack *s) {
	int i;
	for(i=s->top; i>=0; i--)
		printf("%d ",s->data[i]);
	printf("\n");
}

/*���ջ��Ԫ��*/
void DispBottom(SeqStack *s) {
	printf("%d ",s->data[0]);
	printf("\n");
}

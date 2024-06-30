#include <stdio.h>
#include <stdlib.h>

#define MaxSize 100

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int top; /*Õ»¶¥Ö¸Õë*/
} SeqStack; /*¶¨ÒåË³ÐòÕ»*/

/*³õÊ¼»¯Õ»*/
void InitStack(SeqStack *s) {
	s->top=-1;
}

/*ÅÐÕ»¿Õ*/

int StackEmpty(SeqStack *s) {
	if(s->top==-1) {
		return 1; /*Õ»¿Õ·µ»Ø1 */
	} else {
		return 0; /*·ñÔò·µ»Ø0 */
	}
}

/*ÅÐÕ»Âú*/
int StackFull(SeqStack *s) {
	if(s->top==MaxSize-1)
		return 1; /*Õ»Âú·µ»Ø1 */
	else
		return 0; /*·ñÔò·µ»Ø0 */
}

/*½øÕ»*/
void Push(SeqStack *s,ElemType x) {
	if (StackFull(s)) {
		printf("Õ»ÂúÒç³ö´íÎó£¡\n");
		exit(1);
	}
	s->top++;
	s->data[s->top]=x;
}

/*³öÕ»*/
ElemType Pop(SeqStack *s) {
	if(StackEmpty(s)) {
		printf("Õ»ÏÂÒç´íÎó£¡\n");
		exit(1);
	}

	s->top--;

	return s->data[s->top+1]; /*·µ»ØÔ­Õ»¶¥ÔªËØÖµ*/
}

/*È¡Õ»¶¥ÔªËØ*/
ElemType GetTop(SeqStack *s) {
	if(StackEmpty(s)) {
		printf("Õ»ÏÂÒç´íÎó£¡\n");
		exit(1);
	}
	return s->data[s->top];
}

/*ÒÀ´ÎÊä³ö´ÓÕ»¶¥µ½Õ»µ×µÄÔªËØ*/
void DispStack(SeqStack *s) {
	int i;
	for(i=s->top; i>=0; i--)
		printf("%d ",s->data[i]);
	printf("\n");
}

/*Êä³öÕ»µ×ÔªËØ*/
void DispBottom(SeqStack *s) {
	printf("%d ",s->data[0]);
	printf("\n");
}

/*
实现一个计算器
采用逆波兰表示法表示为:
12-45+*

while (下一个运算符或操作数不是文件结束指示符) if (是数)
将该数压入到栈中 else if (是运算符)
      弹出所需数目的操作数
      执行运算
      将结果压入到栈中
else if (是换行符) 弹出并打印栈顶的值
else
出错
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> /* for atof() */
#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */
int getop(char []);
void push(double);
double pop(void);

/* reverse Polish calculator */
int main()
{
	int type;
	double op2;
	char s[MAXOP];
	while((type = getop(s)) != EOF)
	{
		switch(type)
		{
			case NUMBER:
					push(atof(s));
					break;
			case '+':
					push(pop()+pop());
					break;
			case '*':
					push(pop()*pop());
					break;
			case '-':
					op2 = pop();
					push(pop()-op2);
					break;
			case '/':
					op2 = pop();
					if(op2 != 0.0)
						push(pop()/op2);
					else
						printf("error: zero divisor\n");
					break;
			case '\n':
					printf("\t%.8g\n", pop());
					break;
			default:
					printf("error:unknown command %s\n", s);
					break;

		}
	}
	return 0;
}



#define MAXVAL 100 /* maximum depth of val stack */
int sp = 0;   /*next free stack position*/
double val[MAXVAL]; /* value stack */
/* push : push f onto value stack */
void push(double f)
{
	if(sp<MAXVAL)
		val[sp++]=f;
	else
		printf("error: stack full, can't push %g\n", f);
}

/*pop: pop and return top value from stack */
double pop(void)
{
	if(sp>0)
		return val[--sp];
	else
	{
		printf("error: stack empty \n");
		return 0.0;
	}
}

int getch(void);
void ungetch(int);
/*getop: get next character or numeric operand*/
int getop(char s[])
{
	int i, c;
	while((s[0]=c=getch())==' '||c=='\t')
	{
		;//略过
	}
	s[1]='\0';
	if(!isdigit(c) && c!='.')
	{
		return c; /*not a number*/
	}
	i = 0;
	if(isdigit(c))
	{
		while(isdigit(s[++i] = c = getch()))
		{
			;
		}
	}
	if(c=='.')
	{
		while(isdigit(s[++i] = c = getch()))
		{
			;
		}
	}
	s[i]='\0';
	if(c!=EOF)
		ungetch(c);
	return NUMBER;
	

}

#define BUFSIZE 100
char buf[BUFSIZE]; /*buffer for ungetch */
int bufp = 0;     /*next free posiiton in buf */
int getch(void)
{
	return (bufp>0)?buf[--bufp]:getchar();
}

void ungetch(int c)
{
	if(bufp>=BUFSIZE)
	{
		printf("ungetch: too many characters\n");
	}
	else
	{
		buf[bufp++] = c;
	}
}
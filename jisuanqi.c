#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//开始界面
void start() {
	printf("********************************\n");
	printf("*******1、开始    0、退出*******\n");
	printf("**** tips:输入数字1回车开始 ****\n");
	printf("********************************\n");
}
//生成简介
void jianjie() {
	printf("欢迎使用花花牌计算器，本计算器包含加减乘除四则运算功能\ntips:如果要计算1加1请输入：1+1 之后直接回车即可\n\n");
}
//计算器功能实现
void jisuanqi() {
	double x, y, z; 
	char i;
jisuanqiya:
	printf("请输入:");
	scanf("%lf%c%lf", &x, &i, &y);
	switch (i)
	{
		case '+':
			z = x + y;
			printf("%.2lf%c%.2lf=%.2lf\n", x, i, y, z);
			break;
		case '-':
			z = x - y;
			printf("%.2lf%c%.2lf=%.2lf\n", x, i, y, z);
			break;
		case '*':
			z = x * y;
			printf("%.2lf%c%.2lf=%.2lf\n", x, i, y, z);
			break;
		case '/':
			if (y == 0) {
				printf("你输入的格式不规范(分母不允许为0哦)，请重新输入！\n");
				goto jisuanqiya;
			}
			else {
				z = x / y;
				printf("%.2lf%c%.2lf=%.2lf\n", x, i, y, z);
			}
			break;
		default:
			printf("你输入的格式不正确！请重新输入\n");
			break;
	}
}

int main() {
	//判断是否开始使用计算器
	int input = 0;
	jianjie();
	do {
		start();
		scanf("%d", &input);
		switch (input) {
			case 1:
				jisuanqi();
				break;
			case 0:
				printf("计算器已经退出，谢谢使用！\n");
				break;
		}
	} while (input);
	system("pause");
	return 0;
}
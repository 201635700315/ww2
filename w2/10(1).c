#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int I;
double b=0; 
printf("请输入利润金额： ");
scanf("%d",&I);
if(I <= 0)
{printf("请重新输入\n");
return 0;}
if(I<=100000)
b=I*0.1;
else if(I>100000&&I<=200000)
b=100000*0.1+(I-100000)*0.075;
else if(I>200000&&I<=400000)
b=100000*0.1+100000*0.075+(I-200000)*0.05;
else if(I>400000&&I<=600000)
b=100000*0.1+100000*0.075+200000*0.05+(I-400000)*0.03;
else if(I>600000&&I<=1000000)
b=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(I-600000)*0.015;
else 
b=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(I-1000000)*0.01;
printf("奖金为：%lf元\n", b); 
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
double I = 0, b = 0;
printf("请输入利润金额： ");
scanf("%lf", &I);
if(I <= 0)
{
printf("请重新输入\n");
return 0;
}
I /= 10000;
switch((int)(I/10))
{
case 0:
b = I * 0.1;
break;
case 1:
b = 10 * 0.1 + (I - 10) * 0.075;
break;
case 2:
case 3:
b = 10 * 0.1 + 10 * 0.075 + (I - 20) * 0.05;
break;
case 4:
case 5:
b = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (I - 40) * 0.03;
break;
case 6:
case 7:
case 8:
case 9:
b = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (I - 60) * 0.015;
break;
default:
b = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (I - 100) * 0.01;
break;
}
b = b * 10000;
printf("奖金为： %lf元\n", b);
	return 0;
}

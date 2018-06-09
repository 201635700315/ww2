#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("请输入一个不多于5位的正整数：");
  int a,n;
  scanf("%d",&a);
  if(a>0&&a<10){
    n=1;
    printf("位数:%d\n",n);
  printf("逆序为:%d",a%10,a%10);}
  else if(a>0&&a<100){
    n=2;
    printf("位数:%d\n",n);
  printf("逆序为:%d%d",a/10,a%10,a%10,a/10);}
  else if(a>0&&a<1000){
    n=3;
    printf("位数:%d\n",n);
 printf ("逆序为:%d%d%d",a/100,a%100/10,a%10,a%10,a%100/10,a/100);}
  else if(a>0&&a<10000){
    n=4;
    printf("位数:%d\n",n);
  printf("逆序为:%d%d%d%d",a/1000,a/100%10,a%100/10,a%10,a%10,a%100/10,a/100%10,a/1000);}
  else if(a>0&&a<100000){
    n=5;
    printf("位数:%d\n",n);
    printf("逆序为:%d%d%d%d%d",a%10,a%100/10,a%1000/100,a/1000%10,a/10000);
  }
  else{
    printf("请重新输入:");
  }
	return 0;
}

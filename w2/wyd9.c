#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("������һ��������5λ����������");
  int a,n;
  scanf("%d",&a);
  if(a>0&&a<10){
    n=1;
    printf("λ��:%d\n",n);
  printf("����Ϊ:%d",a%10,a%10);}
  else if(a>0&&a<100){
    n=2;
    printf("λ��:%d\n",n);
  printf("����Ϊ:%d%d",a/10,a%10,a%10,a/10);}
  else if(a>0&&a<1000){
    n=3;
    printf("λ��:%d\n",n);
 printf ("����Ϊ:%d%d%d",a/100,a%100/10,a%10,a%10,a%100/10,a/100);}
  else if(a>0&&a<10000){
    n=4;
    printf("λ��:%d\n",n);
  printf("����Ϊ:%d%d%d%d",a/1000,a/100%10,a%100/10,a%10,a%10,a%100/10,a/100%10,a/1000);}
  else if(a>0&&a<100000){
    n=5;
    printf("λ��:%d\n",n);
    printf("����Ϊ:%d%d%d%d%d",a%10,a%100/10,a%1000/100,a/1000%10,a/10000);
  }
  else{
    printf("����������:");
  }
	return 0;
}

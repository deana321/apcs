//輸入兩整數的四則運算式 (a+b, a-b, a*b, a/b, a%b)，印出其計算結果。

#include <stdio.h>

int main() {

int a,b,c,plus,subtract,multiply,divided,extra;

printf("inputa=");
scanf("%d",&a);
printf("inputb=") ;
scanf("%d",&b);

//相加

plus=a+b;
printf("\n%d+%d=%d",a,b,plus);

//相減

subtract=a-b;
printf("\n%d-%d=%d",a,b,subtract);

//相乘

multiply=a*b;
printf("\n%d*%d=%d",a,b,multiply);

//相除

divided=a/b;
printf("\n%d/%d=%d",a,b,divided);

//求餘

extra=a%b;
printf("\n%d/%d=%d...%d",a,b,divided,extra);

 return 0;
}

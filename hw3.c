//運用計算其BMI再依性別判斷其身體質量

//BMI=體重(kg)/身高(m)的平方
//男生：10以下(太瘦)、11-21(標準)、22以上(過高)
//女生：20以下(太瘦)、21-24(標準)、25以上(過高)


#include <stdio.h>

float main() {

float bg,kg,m,mm,bmi,x,y,z;

printf("男生請打1女生請打0=");
scanf("%f",&bg);
printf("為=%f\n",bg);

printf("輸入身高(m)=");
scanf("%f",&m);
printf("身高為=%f\n",m);

printf("輸入體重(kg)=") ;
scanf("%f",&kg);
printf("體重為=%f\n",kg);

//bmi計算

mm=m*m;
bmi=kg/mm;
printf("\nBMI為=%f",bmi);

//計算標準男

if(bg==1&&bmi>22)
   printf("\n過重");

if(bg==1&&22>bmi&&bmi>11)
   printf("\n標準");

if(bg==1&&11>bmi)
   printf("\n過瘦");

//計算標準女

if(bg==0&&bmi>25)
   printf("\n過重");

if(bg==0&&25>bmi&&bmi>21)
   printf("\n標準");

if(bg==0&&21>bmi)
   printf("\n過瘦");

 return 0;
}

#include <stdio.h>
#include <math.h>

int main(void)
{
//1.求三个整数的和
	int a1, a2, a3;

	printf("1-> 求三个整数的和\n");

	printf("输入第一个数a1\n");
	scanf_s("%d",&a1);

	printf("输入第二个数a2\n");
	scanf_s("%d",&a2);

	printf("输入第三个数a3\n");
	scanf_s("%d",&a3);

	printf("这三个整数的和 = %d\n\n",a1 + a2 + a3);


//2.求两个数的和、差、积和商(可以为小数)
	double b1, b2;

	printf("2-> 求两个数的和、差、积和商(可以为小数)\n");

	printf("输入这两个数：\n");
	scanf_s("%lf  %lf" ,&b1, &b2);

	printf("这两个数的和 = %lf\n",b1 + b2);
	printf("这两个数的差 = %lf\n", b1 - b2);
	printf("这两个数的积 = %lf\n", b1 * b2);
	printf("这两个数的商 = %lf\n", b1 / b2);


//3.求这五个数平方后的和(可以为小数)
	double c1, c2, c3, c4, c5;

	printf("3-> 求五个数平方后的和(可以为小数)\n");

	printf("输入五个数字：\n");

	scanf_s("%lf %lf %lf %lf %lf",&c1, &c2, &c3, &c4, &c5);

	printf("这五个数的平方的和 = %lf\n",c1 * c1 + c2 * c2 + c3 * c3 + c4 * c4 + c5 * c5);


//4.求三个数平方根的和(可以为小数)
	double d1, d2, d3;

	printf("4-> 求三个数平方根的和(可以为小数)\n");

	printf("输入三个数：\n");

	scanf_s("%lf %lf %lf",&d1, &d2, &d3);

	printf("这三个数平方根的和 = %lf\n",sqrt(d1) + sqrt(d2) +sqrt(d3));


//5.求圆的面积和周长(可以为小数)
	float r, Pi;
	Pi = 3.1415926;
	printf("5-> 求圆的面积和周长(可以为小数)\n");
	printf("请输入圆的半径(可以为小数)：\n");

	scanf_s("%f",&r);

	printf("圆的面积(保留小数点后4位) = %.4f\n圆的周长(保留小数点后4位) = %.4f\n",Pi * r * r, 2 * Pi * r);


//6.输入指定内容
	printf("6-> 输入指定内容 \n");
	printf("What a beautiful campus!\n");
	printf("I wish you every success!\n");
	
	return 0;
}
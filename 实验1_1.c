#include <stdio.h>
#include <math.h>

int main(void)
{
//1.�����������ĺ�
	int a1, a2, a3;

	printf("1-> �����������ĺ�\n");

	printf("�����һ����a1\n");
	scanf_s("%d",&a1);

	printf("����ڶ�����a2\n");
	scanf_s("%d",&a2);

	printf("�����������a3\n");
	scanf_s("%d",&a3);

	printf("�����������ĺ� = %d\n\n",a1 + a2 + a3);


//2.���������ĺ͡��������(����ΪС��)
	double b1, b2;

	printf("2-> ���������ĺ͡��������(����ΪС��)\n");

	printf("��������������\n");
	scanf_s("%lf  %lf" ,&b1, &b2);

	printf("���������ĺ� = %lf\n",b1 + b2);
	printf("���������Ĳ� = %lf\n", b1 - b2);
	printf("���������Ļ� = %lf\n", b1 * b2);
	printf("������������ = %lf\n", b1 / b2);


//3.���������ƽ����ĺ�(����ΪС��)
	double c1, c2, c3, c4, c5;

	printf("3-> �������ƽ����ĺ�(����ΪС��)\n");

	printf("����������֣�\n");

	scanf_s("%lf %lf %lf %lf %lf",&c1, &c2, &c3, &c4, &c5);

	printf("���������ƽ���ĺ� = %lf\n",c1 * c1 + c2 * c2 + c3 * c3 + c4 * c4 + c5 * c5);


//4.��������ƽ�����ĺ�(����ΪС��)
	double d1, d2, d3;

	printf("4-> ��������ƽ�����ĺ�(����ΪС��)\n");

	printf("������������\n");

	scanf_s("%lf %lf %lf",&d1, &d2, &d3);

	printf("��������ƽ�����ĺ� = %lf\n",sqrt(d1) + sqrt(d2) +sqrt(d3));


//5.��Բ��������ܳ�(����ΪС��)
	float r, Pi;
	Pi = 3.1415926;
	printf("5-> ��Բ��������ܳ�(����ΪС��)\n");
	printf("������Բ�İ뾶(����ΪС��)��\n");

	scanf_s("%f",&r);

	printf("Բ�����(����С�����4λ) = %.4f\nԲ���ܳ�(����С�����4λ) = %.4f\n",Pi * r * r, 2 * Pi * r);


//6.����ָ������
	printf("6-> ����ָ������ \n");
	printf("What a beautiful campus!\n");
	printf("I wish you every success!\n");
	
	return 0;
}
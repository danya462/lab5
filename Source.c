#include <locale.h>
#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>
#define M_PI            3.14159265358979323846
void task1();
void task2();
void task3();
void task4();

int main() 
{


	setlocale(LC_CTYPE, "RUS");


		task2();


}

void task1()
{
	float grad, res;

	printf("Введите значение градуса:\n");

	scanf("%f", &grad);

	res = (grad * M_PI) / 180;

	printf("%f градусов = %.6f",grad, sin(res));


}

void task2()
{
	double x, y, k = 8.2, a, b;

	printf("Введите x:\n");
	scanf("%le", &x);

	b = sqrt(fabs(x));
	a = pow(b, 4) + pow(k, 3); 
	y = pow(log(a),3) + exp(-x);

	printf("Ответ: %.2f \n k = %.6f", y, k);



}

void task3()
{
	int a, b;
	printf(" _______________________\n");
	printf("| a * b | a + b | a - b |\n");
	printf("|_______________________|\n");
	printf("Введите значение a и b:\n ");
	scanf("%d %d", &a, &b);
	printf("%26s%26s%26s\n", "______", "______", "______");
	printf("|%-25s|%-25s|%-25s|\n","a * b", "a + b", "a - b" );
	printf("|%25s|%25s|%25s|\n", "______", "______", "______");
	printf("|%11d * %-11d|%11d + %-11d|%11d - %-11d|\n", a, b, a, b, a, b);
	printf("|%25s|%25s|%25s|\n", "______", "______", "______");
	printf("|%25d|%25d|%25d|\n", a * b, a + b, a - b);
	printf("|%25s|%25s|%25s|\n", "______", "______", "______");
}


void task4()
{

	float x;

	puts("\nВведите значение x:");
	scanf("%f", &x);

	int k;
	k = -4;
	printf("X = %.1f\ny = %.1f", x, x * pow(log(fabs(-k * x)), 3) + pow(exp(2 * x) + log(fabs(-k * x)) * x, 2));
}
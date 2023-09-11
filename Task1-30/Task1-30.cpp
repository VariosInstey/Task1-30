#include <cmath> // Математическая библиотека!
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus"); //указывает программе, что локализация произойдёт на русский язык.
	
	// Task 1
	int t = 0;
	cout << "Введите задание : " << endl;
	cin >> t;

	if (t == 1)


		{
			double t, l;
			cout << "Введите значение переменной t " << endl;
			cin >> t;
			cout << "Введите значение переменной l " << endl;
			cin >> l;
			cout << "R = " << 3 * pow(t, 2) + 3 * pow(l, 5) + 4.9 << endl;
		}
	

	if (t == 2)
		// Task 2

		{
			double p, y;
			cout << "Введите значение переменной p " << endl;
			cin >> p;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "K = " << log(pow(p, 2) + pow(y, 3)) + exp(p) << endl;
		}



		// Task 3
	if (t == 3)
		{
			double n, y;
			cout << "Введите значение переменной n " << endl;
			cin >> n;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "G = " << n * (y + 3.5) + sqrt(y) << endl;
		}


	if (t == 4)
		// Task 4
		{
			double a, t;
			cout << "Введите значение переменной a " << endl;
			cin >> a;
			cout << "Введите значение переменной t " << endl;
			cin >> t;
			cout << "D = " << 9.8 * pow(a, 2) + 5.52 * cos(pow(t, 5)) << endl;
		}


	if (t == 5)
		// Task 5
		{
			double x;
			cout << "Введите значение переменной x " << endl;
			cin >> x;
			cout << "L = " << 1.51 * cos(pow(x, 2)) + 2 * pow(x, 3) << endl;
		}


	if (t == 6)
		// Task 6
		{
			double y, x;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной x " << endl;
			cin >> x;
			cout << "M = " << cos(2 * y) + 3.6 * exp(x) << endl;
		}


	if (t == 7)
		//Task 7
		{
			double m;
			cout << "Введите значение переменной m " << endl;
			cin >> m;
			cout << "N = " << pow(m, 2) + 2.8 * abs(m) + 0.55 << endl;
		}


	if (t == 8)
		// Task 8

		{
			double y;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "T = " << sqrt(abs(6 * pow(y, 2) - 0.1 * y + 4)) << endl;
		}


	if (t == 9)
		// Task 9

		{
			double y, x;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной x " << endl;
			cin >> x;
			cout << "V = " << log(y + 0.95) + sin(pow(x, 4)) << endl;
		}


	if (t == 10)
		//Task 10

		{
			double k, x, y;
			cout << "Введите значение переменной k " << endl;
			cin >> k;
			cout << "Введите значение переменной x " << endl;
			cin >> x;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "U = " << exp(y) + 7.355 * pow(k, 2) + pow(sin(x), 2) << endl;
		}


	if (t == 11)
		// Task 11

		{
			double y, x;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной x " << endl;
			cin >> x;
			cout << "S = " << 9.756 * pow(y, 7) + 2 * (tan(x)) << endl;
		}


	if (t == 12)
		// Task 12

		{
			double t, x;
			cout << "Введите значение переменной t " << endl;
			cin >> t;
			cout << "Введите значение переменной x " << endl;
			cin >> x;
			cout << "K = " << 7 * pow(t, 2) + 3 * (sin(pow(x, 3))) + 9.2 << endl;
		}


	if (t == 13)
		// Task 13

		{
			double y;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "E = " << sqrt(abs(3 * pow(y, 2) + 0.5 * y + 4)) << endl;
		}


	if (t == 14)
		// Task 14

		{
			double y, x;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной x " << endl;
			cin >> x;
			cout << "R = " << abs(sqrt(pow(sin(y), 2) + 6.835) + exp(x)) << endl;
		}


	if (t == 15)
		// Task 15

		{
			double y;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "H = " << sin(pow(y, 2)) - 2.8 * y + sqrt(abs(y)) << endl;
		}


	if (t == 16)
		// Task 16

		{
			double y;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "S = " << sqrt(cos(4 * pow(y, 2)) + 7.151) << endl;
		}


	if (t == 17)
		// Task 17

		{
			double y;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "N = " << 3 * pow(y, 2) + sqrt(y + 1) << endl;
		}


	if (t == 18)
		// Task 18

		{
			double y;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Z = " << 3 * pow(y, 2) + sqrt(pow(y, 3) + 1) << endl;
		}


	if (t == 19)
		// Task 19

		{
			double n, y, g;
			cout << "Введите значение переменной n " << endl;
			cin >> n;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной g " << endl;
			cin >> g;
			cout << "P = " << n * sqrt(pow(y, 3) + 1.09 * g) << endl;
		}


	if (t == 20)
		// Task 20

		{
			double k, y, x;
			cout << "Введите значение переменной k " << endl;
			cin >> k;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной x " << endl;
			cin >> x;
			cout << "U = " << exp(k + y) + tan(x) * sqrt(y) << endl;
		}


	if (t == 21)
		// Task 21

		{
			double y, h;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной h " << endl;
			cin >> h;
			cout << "P = " << exp(y + 5.5) + 9.1 * pow(h, 3) << endl;
		}


	if (t == 22)
		// Task 22

		{
			double u, y, x;
			cout << "Введите значение переменной u " << endl;
			cin >> u;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной x " << endl;
			cin >> x;
			cout << "T = " << sin((2 * u)) * log((2 * pow(y, 2) + sqrt(x))) << endl;
		}


	if (t == 23)
		// Task 23

		{
			double y, f;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной f " << endl;
			cin >> f;
			cout << "G = " << exp(2 * y) + sin((f)) << endl;
		}


	if (t == 24)
		// Task 24

		{
			double y;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "F = " << 2 * sin(0.214 * pow(y, 5) + 1) << endl;
		}


	if (t == 25)
		// Task 25

		{
			double y, f;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной f " << endl;
			cin >> f;
			cout << "G = " << exp(2 * y) + sin(pow(f, 2)) << endl;
		}


	if (t == 26)
		// Task 26

		{
			double p;
			cout << "Введите значение переменной p " << endl;
			cin >> p;
			cout << "Z = " << sin(pow(p, 2) + 0.4) << endl;
		}


	if (t == 27)
		// Task 27

		{
			double v, y, x;
			cout << "Введите значение переменной v " << endl;
			cin >> v;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной x " << endl;
			cin >> x;
			cout << "W = " << 1.03 * v + exp(2 * y) + tan(abs(x)) << endl;
		}


	if (t == 28)
		// Task 28

		{
			double y, h;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной h " << endl;
			cin >> h;
			cout << "T = " << exp(y + h) + sqrt(abs(6.4 * y)) << endl;
		}


	if (t == 29)
		// Task 29

		{
			double y;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "N = " << 3 * pow(y, 2) + sqrt(abs(y + 1)) << endl;
		}


	if (t == 30)
		// Task 30

		{
			double y, r;
			cout << "Введите значение переменной y " << endl;
			cin >> y;
			cout << "Введите значение переменной r " << endl;
			cin >> r;
			cout << "W = " << exp(y + r) + 7.2 * sin(r) << endl;
		}

	system("pause"); // Системный вызов команды pause, которая ждёт любого ввода!
}

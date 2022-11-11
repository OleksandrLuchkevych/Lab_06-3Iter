#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

// Перший спосіб(звичайна функція)

void Create(int* p, const int size, const int Min, const int Max, int i)
{
	p[i] = Min + rand() % (Max - Min + 1);
	if (i < size - 1)
		Create(p, size, Min, Max, i + 1);

}


void Vyvid(int* p, const int size, int i)
{
	cout << p[i] << " ";
	if (i < size - 1)

		Vyvid(p, size, i + 1);
	else

		return;
}


void Create1(int* p, const int size, int i)
{
	if (i <= size - 1)
	{

		if (p[i] < 0)
		{
			cout << p[i] << " ";
			Create1(p, size, i + 1);
		}
		else
			Create1(p, size, i + 1);
	}
	else return;
}

int Count(int* p, const int size, int k, int i)
{
	if (i < size)
	{
		if (p[i] < 0)
			return Count(p, size, ++k, ++i);

		else return Count(p, size, k, ++i);
	}

	else return k;
}




// шаблони
template <typename T>
void Create(T* p, const int size, const T Min, const T Max, int i)
{
	p[i] = Min + rand() % (Max - Min + 1);
	if (i < size - 1)
		Create(p, size, Min, Max, i + 1);

}

template <typename T1>
void Vyvid(T1* p, const int size, int i)
{
	cout << p[i] << " ";
	if (i < size - 1)

		Vyvid(p, size, i + 1);
	else

		return;
}

template <typename T2>
void Create1(T2* p, const int size, int i)
{
	if (i <= size - 1)
	{

		if (p[i] < 0)
		{
			cout << p[i] << " ";
			Create1(p, size, i + 1);
		}
		else
			Create1(p, size, i + 1);
	}
	else return;
}

template <typename T3>
int Count(T3* p, const int size, int k, int i)
{
	if (i < size)
	{
		if (p[i] < 0)
			return Count(p, size, ++k, ++i);

		else return Count(p, size, k, ++i);
	}

	else return k;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 20;
	int p[n];
	int Min = -50;
	int Max = 50;

	Create(p, n, Min, Max, 0);
	cout << endl;
	
	Vyvid(p, n, 0);
	cout << endl;
	Create1(p, n, 0);
	cout << endl;

	int k = Count(p, n, 0, 0);
	cout << "Kilkist = " << k << endl;


	Create<int>(p, n, Min, Max, 0);
	cout << endl;
	Vyvid<int>(p, n, 0);
	cout << endl;
	Create1<int>(p, n, 0);
	cout << endl;
	cout << "Kilkist = " << Count<int>(p, n, 0, 0) << endl;

}

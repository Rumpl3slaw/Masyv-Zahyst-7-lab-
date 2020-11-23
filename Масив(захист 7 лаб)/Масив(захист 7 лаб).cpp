#include <iostream>
#include <iomanip>

using namespace std;

void Create(int** a, const int m, const int n, const int Low, const int High);
void Print(int** a, const int m, const int n);
void Check(int** a, const int m, const int n);

int main()
{
	srand((unsigned)time(NULL));

	int m;
	cout << "Kil`kist` ryadkiv=";
	cin >> m;
	cout << endl;
	int n;
	cout << "Kil`kist` stovptsiv=";
	cin >> n;
	int** a = new int* [m];
	for (int i = 0;i < m;i++)
		a[i] = new int[n];

	int Low = 3;
	int High = 47;
	Create(a, m, n, Low, High);
	cout << "Masyv:" << endl;
	Print(a, m, n);

	Check(a, m, n);


}
void Create(int** a, const int m, const int n, const int Low, const int High)
{
	for (int i = 0;i < m;i++)
		for (int j = 0;j < n;j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int m, const int n)
{
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
void Check(int** a, const int m, const int n)
{
	cout << "-------------------------------------------" << endl;
	if (m == n)
		cout << "Diagonal` symetrychna vidnosno matrytsi";
	else
		cout << "Diagonal` ne symetrychna vidnosno matrytsi" ;
	cout << "|" << endl;
	cout << "-------------------------------------------" << endl;
}

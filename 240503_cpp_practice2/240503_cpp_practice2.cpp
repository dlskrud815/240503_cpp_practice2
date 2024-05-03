// 난수 생성
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Random()
{
	int randomNumber = rand();
	return randomNumber % 45 + 1;
}

int main()
{
	cout << "* 로또 번호 추천 프로그램 *" << endl;

	int num = 6, temp1=0, temp2=0;

	for (int i = 0; i < num; i++)
	{
		temp1 = Random();

		while (1)
		{
			if (temp2 == temp1)
			{
				temp1 = Random();
			}
			else
			{
				temp2 = temp1;
				break;
			}
		}

		cout << i+1 << ": " << temp2 << "\t";
	}

	return 0;
}
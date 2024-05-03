// 난수 생성
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Random(int range)
{
	srand(time(NULL));
	return rand() % range + 1;
}

int main()
{
	int range;

	cout << "* 로또 번호 추천 프로그램 *" << endl
		<< "난수 범위 입력: ";
	cin >> range;

	int num = 6, temp1=0, temp2=0;

	for (int i = 0; i < num; i++)
	{
		temp1 = Random(range);

		while (1)
		{
			if (temp2 == temp1)
			{
				temp1 = Random(range);
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
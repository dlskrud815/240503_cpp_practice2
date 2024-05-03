// 난수 생성
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Random(int randomNumber, int randNum)
{
	srand(time(NULL));
	randomNumber = rand();
	randNum = randomNumber % 45 + 1; //1~45 범위 지정

	return randNum;
}

int main()
{
	cout << "* 로또 번호 추천 프로그램 *" << endl;

	int num = 6, randomNumber=0, randNum=0, temp1=0, temp2=0;

	for (int i = 0; i < num; i++)
	{
		temp1 = Random(randomNumber, randNum);

		while (1)
		{
			if (temp2 == temp1)
			{
				temp1 = Random(randomNumber, randNum);
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
// 2016726090 박종서

#include "MyIntVector.h"
#include <iostream>

using namespace std;

int main()
{
	MyIntVector vector1;
	MyIntVector vector2;

	for (int i = 1; i <= 10; i++)
	{
		vector1.push_back(i);
		vector2.push_back(20 - i);
	}

	cout << "vector1 : ";

	for (int i = 0; i < vector1.size(); i++)
		cout << vector1[i] << " ";
	cout << endl << endl;

	cout << "vector2 : ";

	for (int i = 0; i < vector2.size(); i++)
		cout << vector2[i] << " ";
	cout << endl << endl;

	MyIntVector vector3(vector1);

	cout << "vector1 에 1~10을 넣고 vector3(vector1) 를 하였을 경우 : vector3 : ";

	for (int i = 0; i < vector3.size(); i++)
		cout << vector3[i] << " ";
	cout << endl << endl;

	vector3 = vector2;

	cout << "vector2 에 19~10을 넣고 vector3 = vector2 를 하였을 경우 : vector3 : ";

	for (int i = 0; i < vector3.size(); i++)
		cout << vector3[i] << " ";
	cout << endl << endl;

	vector3 += vector1;

	cout << "vector3 += vector1(1~10) 을 하였을 경우 : vector3 : ";

	for (int i = 0; i < vector3.size(); i++)
		cout << vector3[i] << " ";
	cout << endl << endl;

	//cout << vector3[60] << endl; //출력 시 requested position is out of range. 가 나오며 종료됨.

	cout << "vector4 = vector1(1~10) + vector2(19~10) 을 하였을 경우 : vector4 : ";

	MyIntVector vector4 = vector1 + vector2;

	for (int i = 0; i < vector4.size(); i++)
		cout << vector4[i] << " ";
	cout << endl << endl;

	vector4 = vector1 - vector2;

	cout << "vector4 = vector1(1~10) - vector2(19~10) 을 하였을 경우 : vector4 : ";

	for (int i = 0; i < vector4.size(); i++)
		cout << vector4[i] << " ";
	cout << endl << endl;

	vector2(1);

	cout << "vector2(19~10) 을 vector2(1) 로 하였을 경우 : vector2 : ";

	for (int i = 0; i < vector2.size(); i++)
		cout << vector2[i] << " ";
	cout << endl << endl;

	int sum = vector1 * vector2;

	cout << "sum = vector1(1~10) * vector2(1 10개) 을 하였을 경우 : sum : " << sum << endl << endl;

	-vector2;

	cout << "vector2(1 10개) 를 -vector2 로 하였을 경우 : vector2 : ";

	for (int i = 0; i < vector2.size(); i++)
		cout << vector2[i] << " ";
	cout << endl << endl;
	
	cout << "vector1(1~10) == vector2(-1 10개) 를 하였을 경우 : vector1 == vector2 ? " << (vector1 == vector2) << endl << endl;

	MyIntVector vector5;

	for (int i = 0; i < 10; i++)
		vector5.push_back(i + 1);

	cout << "vector1(1~10) == vector5(1~10) 를 하였을 경우 : vector1 == vector5 ? " << (vector1 == vector5) << endl << endl;

	MyIntVector vector6;

	vector6.push_back(5);

	cout << "vector6 : ";

	for (int i = 0; i < vector6.size(); i++)
		cout << vector6[i] << " ";
	cout << endl << endl;

	vector6.push_back(10);

	cout << "vector6 에 push_back(10) 을 하였을 경우 : vector6 : ";

	for (int i = 0; i < vector6.size(); i++)
		cout << vector6[i] << " ";
	cout << endl << endl;

	vector6.pop_back();

	cout << "vector6 에 pop_back() 을 하였을 경우 : vector6 : ";

	for (int i = 0; i < vector6.size(); i++)
		cout << vector6[i] << " ";
	cout << endl << endl;

	cout << "vector6 의 capacity 를 출력 :  vector6 capacity : " << vector6.capacity() << endl << endl;

	cout << "vector6 의 size 를 출력 : vector6 size : " << vector6.size() << endl << endl;

	cout << "vector6 의 capacity 를 20으로 늘림(reserve(20)) : vector6 capacity : ";

	vector6.reserve(20);

	cout << vector6.capacity() << endl << endl;

	cout << "vector6 가 비어있는지 확인 : vector6 is_empty : " << vector6.is_empty() << endl << endl;

	cout << "vector6 을 클리어함 : vector6 clear : ";

	vector6.clear();

	cout << "vector6 size : " << vector6.size() << ", vector6 capacity : " << vector6.capacity() << ", vector6[0] : " << vector6[0] << endl;

	return 0;
}
// 2016726090 ������

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

	cout << "vector1 �� 1~10�� �ְ� vector3(vector1) �� �Ͽ��� ��� : vector3 : ";

	for (int i = 0; i < vector3.size(); i++)
		cout << vector3[i] << " ";
	cout << endl << endl;

	vector3 = vector2;

	cout << "vector2 �� 19~10�� �ְ� vector3 = vector2 �� �Ͽ��� ��� : vector3 : ";

	for (int i = 0; i < vector3.size(); i++)
		cout << vector3[i] << " ";
	cout << endl << endl;

	vector3 += vector1;

	cout << "vector3 += vector1(1~10) �� �Ͽ��� ��� : vector3 : ";

	for (int i = 0; i < vector3.size(); i++)
		cout << vector3[i] << " ";
	cout << endl << endl;

	//cout << vector3[60] << endl; //��� �� requested position is out of range. �� ������ �����.

	cout << "vector4 = vector1(1~10) + vector2(19~10) �� �Ͽ��� ��� : vector4 : ";

	MyIntVector vector4 = vector1 + vector2;

	for (int i = 0; i < vector4.size(); i++)
		cout << vector4[i] << " ";
	cout << endl << endl;

	vector4 = vector1 - vector2;

	cout << "vector4 = vector1(1~10) - vector2(19~10) �� �Ͽ��� ��� : vector4 : ";

	for (int i = 0; i < vector4.size(); i++)
		cout << vector4[i] << " ";
	cout << endl << endl;

	vector2(1);

	cout << "vector2(19~10) �� vector2(1) �� �Ͽ��� ��� : vector2 : ";

	for (int i = 0; i < vector2.size(); i++)
		cout << vector2[i] << " ";
	cout << endl << endl;

	int sum = vector1 * vector2;

	cout << "sum = vector1(1~10) * vector2(1 10��) �� �Ͽ��� ��� : sum : " << sum << endl << endl;

	-vector2;

	cout << "vector2(1 10��) �� -vector2 �� �Ͽ��� ��� : vector2 : ";

	for (int i = 0; i < vector2.size(); i++)
		cout << vector2[i] << " ";
	cout << endl << endl;
	
	cout << "vector1(1~10) == vector2(-1 10��) �� �Ͽ��� ��� : vector1 == vector2 ? " << (vector1 == vector2) << endl << endl;

	MyIntVector vector5;

	for (int i = 0; i < 10; i++)
		vector5.push_back(i + 1);

	cout << "vector1(1~10) == vector5(1~10) �� �Ͽ��� ��� : vector1 == vector5 ? " << (vector1 == vector5) << endl << endl;

	MyIntVector vector6;

	vector6.push_back(5);

	cout << "vector6 : ";

	for (int i = 0; i < vector6.size(); i++)
		cout << vector6[i] << " ";
	cout << endl << endl;

	vector6.push_back(10);

	cout << "vector6 �� push_back(10) �� �Ͽ��� ��� : vector6 : ";

	for (int i = 0; i < vector6.size(); i++)
		cout << vector6[i] << " ";
	cout << endl << endl;

	vector6.pop_back();

	cout << "vector6 �� pop_back() �� �Ͽ��� ��� : vector6 : ";

	for (int i = 0; i < vector6.size(); i++)
		cout << vector6[i] << " ";
	cout << endl << endl;

	cout << "vector6 �� capacity �� ��� :  vector6 capacity : " << vector6.capacity() << endl << endl;

	cout << "vector6 �� size �� ��� : vector6 size : " << vector6.size() << endl << endl;

	cout << "vector6 �� capacity �� 20���� �ø�(reserve(20)) : vector6 capacity : ";

	vector6.reserve(20);

	cout << vector6.capacity() << endl << endl;

	cout << "vector6 �� ����ִ��� Ȯ�� : vector6 is_empty : " << vector6.is_empty() << endl << endl;

	cout << "vector6 �� Ŭ������ : vector6 clear : ";

	vector6.clear();

	cout << "vector6 size : " << vector6.size() << ", vector6 capacity : " << vector6.capacity() << ", vector6[0] : " << vector6[0] << endl;

	return 0;
}
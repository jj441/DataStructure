// 2016726090 ¹ÚÁ¾¼­

#include "MyIntVector.h"
#include <iostream>
#include <cassert>
#include <cstdlib>

using namespace std;

MyIntVector::MyIntVector()
{
	data = new int[10];
	vecCapacity = 10;
	used = 0;
}

MyIntVector::MyIntVector(const MyIntVector& v)
{
	data = new int[v.vecCapacity];
	vecCapacity = v.vecCapacity;
	used = v.used;
	copy(v.data, v.data + used, data);
}

MyIntVector::~MyIntVector()
{
	delete[] data;
}

MyIntVector& MyIntVector::operator=(const MyIntVector& v)
{

	if (this == &v)
		return *this;

	if (vecCapacity != v.vecCapacity)
	{
		delete[] data;
		data = new int[v.vecCapacity];
		vecCapacity = v.vecCapacity;
	}
	used = v.used;

	copy(v.data, v.data + used, data);
	return *this;
}

void MyIntVector::operator+=(const MyIntVector& v)
{
	if (used + v.used > vecCapacity)
		reserve(used + v.used);
	copy(v.data, v.data + v.used, data + used);
	used += v.used;
}

int& MyIntVector::operator[](int num)
{
	if (num >= this->used)
	{
		std::cout << "requested position is out of range." << endl;
		exit(1);
	}

	return data[num];
}

MyIntVector MyIntVector::operator+(const MyIntVector& v)
{
	if (this->used == v.used)
	{
		MyIntVector v1;

		for (int i = 0; i < this->used; i++)
			v1.push_back(this->data[i] + v.data[i]);

		return v1;
	}
}

MyIntVector MyIntVector::operator-(const MyIntVector& v)
{
	if (this->used == v.used)
	{
		MyIntVector v1;

		for (int i = 0; i < used; i++)
			v1.push_back(this->data[i] - v.data[i]);

		return v1;
	}
}

int MyIntVector::operator*(const MyIntVector& v)
{
	if(this->used == v.used)
	{
		int sum = 0;

		for (int i = 0; i < used; i++)
			sum += this->data[i] * v.data[i];

		return sum;
	}
}

MyIntVector& MyIntVector::operator-()
{
	for (int i = 0; i < used; i++)
		this->data[i] *= -1;

	return *this;
}

bool MyIntVector::operator==(const MyIntVector& v)
{
	assert(this->used == v.used);

	for (int i = 0; i < this->used; i++)
		if (this->data[i] != v.data[i])
			return false;

	return true;
}

MyIntVector& MyIntVector::operator()(int num)
{
	for (int i = 0; i < this->used; i++)
		this->data[i] = num;

	return *this;
}

void MyIntVector::pop_back()
{
	if (this->used > 0)
	{
		this->data[used - 1] = NULL;
		used--;
	}
}

void MyIntVector::push_back(int x)
{
	if (used == vecCapacity)
		reserve(vecCapacity * 2);

	this->data[used] = x;
	used++;
}

size_t MyIntVector::capacity() const
{
	return vecCapacity;
}

size_t MyIntVector::size() const
{
	return used;
}

void MyIntVector::reserve(size_t n)
{
	int* larger_array;

	if (n == vecCapacity)
		return;
	if (n < used)
		n = used;

	larger_array = new int[n];
	copy(data, data + used, larger_array);
	delete[] data;
	data = larger_array;
	vecCapacity = n;
}

bool MyIntVector::is_empty() const
{
	if (used > 0)
		return false;
	else
		return true;
}

void MyIntVector::clear()
{
	for (int i = 0; i < used; i++)
		this->data[i] = NULL;

	used = 0;
	vecCapacity = 10;
}
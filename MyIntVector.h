// 2016726090 ������
#pragma once

class MyIntVector {
public:
	MyIntVector();
	MyIntVector(const MyIntVector& v);
	~MyIntVector();

	//precondition : �������� MyIntVector v�� ���纻�� ������ �ٷ� ��ȯ, �ٸ��� ũ�⸦ �����ϰ� �����Ѵ�.
	//postcondition : �������� MyIntVector v�� ���纻�� �������� ����.
	MyIntVector& operator=(const MyIntVector& v);

	//precondition : ũ�⿡ ���� ũ�⸦ �� �迭�� ��ģ �͸�ŭ �ø��� �����͸� �����Ѵ�.
	//postcondition : �������� MyIntVector v �迭�� ���� MyIntVector �迭�� �߰��ȴ�. 
	void operator+=(const MyIntVector& v);
	
	//precondition : num�� �迭�� ������ ����� �޽����� ����ϰ� ���α׷��� �����Ų��.
	//postcondition :  �ش� ��ġ�� ��Ҹ� ��ȯ�Ѵ�.
	int& operator[](int num);
	
	//precondition : �� �迭�� ����� ���ƾ� �Ѵ�.
	//postcondition : �� �迭�� ��Ҹ� ���� �迭�� ��ȯ�Ѵ�.
	MyIntVector operator+(const MyIntVector& v);
	
	//precondition : �� �迭�� ����� ���ƾ� �Ѵ�.
	//postcondition : �� �迭�� ��Ҹ� �� �迭�� ��ȯ�Ѵ�.
	MyIntVector operator-(const MyIntVector& v);
	
	//precondition : �� �迭�� ����� ���ƾ� �Ѵ�.
	//postcondition : �� �迭�� ��Ҹ� ������ ���ڸ� ��ȯ�Ѵ�.
	int operator*(const MyIntVector& v);
	
	//precondition : ����
	//postcondition : �迭�� ��Ҹ� (-1) �� ���ϰ� ��ȯ�Ѵ�. 
	MyIntVector& operator-();
	
	//precondition : �� �迭�� ����� ���ƾ� �Ѵ�.
	//postcondition : �� �迭�� ������ �ƴ����� ��ȯ�Ѵ�.
	bool operator==(const MyIntVector& v);
	
	//precondition : ����
	//postcondition : �迭�� ��� ��Ҹ� num ���� �����.
	MyIntVector& operator()(int num);

	//precondition : �迭�� ����� 1 �̻��̿��� �Ѵ�.
	//postcondition : �迭�� ������ ��Ҹ� �����ϰ�, ����� �ϳ� ���δ�.
	void pop_back();

	//precondition : capacity �� ������� ���� ��� capcity �� �ø���.
	//postcondition : �迭�� ���� ��Ҹ� �߰��ϰ�, ����� �ϳ� �ø���.
	void push_back(int x);

	//precondition : ����
	//postcondition : �迭�� capacity �� ��ȯ�Ѵ�.
	size_t capacity() const;

	//precondition : ����
	//postcondition : �迭�� size �� ��ȯ�Ѵ�.
	size_t size() const;

	//precondition : ����
	//postcondition : �迭�� capacity �� n ���� �����.
	void reserve(size_t n);

	//precondition : ����
	//postcondition : �迭�� ����ִ����� ��ȯ�Ѵ�.
	bool is_empty() const;

	//precondition : ����
	//postcondition : �迭�� ��� ��Ҹ� �����, ����� 0, capacity �� �⺻������ �����.
	void clear();

private:
	int* data;
	size_t used;
	size_t vecCapacity;
};

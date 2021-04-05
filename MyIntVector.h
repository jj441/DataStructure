// 2016726090 박종서
#pragma once

class MyIntVector {
public:
	MyIntVector();
	MyIntVector(const MyIntVector& v);
	~MyIntVector();

	//precondition : 오른쪽의 MyIntVector v의 복사본이 같으면 바로 반환, 다르면 크기를 조정하고 복사한다.
	//postcondition : 오른쪽의 MyIntVector v의 복사본이 왼쪽으로 들어간다.
	MyIntVector& operator=(const MyIntVector& v);

	//precondition : 크기에 따라 크기를 두 배열을 합친 것만큼 늘리고 데이터를 복사한다.
	//postcondition : 오른쪽의 MyIntVector v 배열이 왼쪽 MyIntVector 배열에 추가된다. 
	void operator+=(const MyIntVector& v);
	
	//precondition : num이 배열의 범위를 벗어나면 메시지를 출력하고 프로그램을 종료시킨다.
	//postcondition :  해당 위치의 요소를 반환한다.
	int& operator[](int num);
	
	//precondition : 두 배열의 사이즈가 같아야 한다.
	//postcondition : 두 배열의 요소를 더한 배열을 반환한다.
	MyIntVector operator+(const MyIntVector& v);
	
	//precondition : 두 배열의 사이즈가 같아야 한다.
	//postcondition : 두 배열의 요소를 뺀 배열을 반환한다.
	MyIntVector operator-(const MyIntVector& v);
	
	//precondition : 두 배열의 사이즈가 같아야 한다.
	//postcondition : 두 배열의 요소를 내적한 숫자를 반환한다.
	int operator*(const MyIntVector& v);
	
	//precondition : 없음
	//postcondition : 배열의 요소를 (-1) 를 곱하고 반환한다. 
	MyIntVector& operator-();
	
	//precondition : 두 배열의 사이즈가 같아야 한다.
	//postcondition : 두 배열이 같은지 아닌지를 반환한다.
	bool operator==(const MyIntVector& v);
	
	//precondition : 없음
	//postcondition : 배열의 모든 요소를 num 으로 만든다.
	MyIntVector& operator()(int num);

	//precondition : 배열의 사이즈가 1 이상이여야 한다.
	//postcondition : 배열의 마지막 요소를 제거하고, 사이즈를 하나 줄인다.
	void pop_back();

	//precondition : capacity 가 사이즈랑 같은 경우 capcity 를 늘린다.
	//postcondition : 배열의 끝에 요소를 추가하고, 사이즈를 하나 늘린다.
	void push_back(int x);

	//precondition : 없음
	//postcondition : 배열의 capacity 를 반환한다.
	size_t capacity() const;

	//precondition : 없음
	//postcondition : 배열의 size 를 반환한다.
	size_t size() const;

	//precondition : 없음
	//postcondition : 배열의 capacity 를 n 으로 만든다.
	void reserve(size_t n);

	//precondition : 없음
	//postcondition : 배열이 비어있는지를 반환한다.
	bool is_empty() const;

	//precondition : 없음
	//postcondition : 배열의 모든 요소를 지우고, 사이즈를 0, capacity 를 기본값으로 만든다.
	void clear();

private:
	int* data;
	size_t used;
	size_t vecCapacity;
};

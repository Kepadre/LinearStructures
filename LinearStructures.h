#pragma once

class Stack
{
private:
	int* bottom;
	int* top;
	int size;

public:
	Stack(int);
	~Stack(void);

	void Push(int);
	int Pop(void);
	int Peek(void);
	int Count(void);
	bool IsEmpty(void);
	bool IsFull(void);
	void Print(void);
};

class Queue
{
private:
	int* bottom;
	int* top;
	int size;

public:
	Queue(int);
	~Queue(void);

	void Enqueue(int);
	int Dequeue(void);
	int Peek(void);
	int Count(void);
	bool IsEmpty(void);
	bool IsFull(void);
	void Print(void);
};

class SingleConnectionList
{
private:
	struct Node
	{
		int data;
		Node* next;
	};
	Node* root, * tail;

public:
	SingleConnectionList(void);
	~SingleConnectionList(void);

	void Add(int);
	int RemoveAt(int);
	int RemoveRoot(void);
	void Print(void);
	void ExchangeAt(int);
	int Count(void);
};

class DoubleConnectionList
{
private:
	struct Node
	{
		int data;
		Node* next, * prev;
	};
	Node* root, * tail;

public:
	DoubleConnectionList(void);
	~DoubleConnectionList(void);

	void Add(int);
	int RemoveAt(int);
	int RemoveRoot(void);
	void Print(void);
	void PrintReverse(void);
	void ExchangeAt(int);
	int Count(void);
};

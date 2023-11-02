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

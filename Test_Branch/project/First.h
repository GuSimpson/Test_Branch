#pragma once
class First
{
public:
	First(const int n1, const int n2)
		: num1(n1), num2(n2)
	{

	};
	virtual	~First() = default;

	virtual void Begin() = 0;
	virtual void End() = 0;

private:
	int num1; 
	int num2;
};
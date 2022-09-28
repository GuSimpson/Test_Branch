#pragma once
#include "First.h"
class Second : public First
{
public:
	Second(const int n1, const int n2)
		:First(n1, n2)
	{};
	~Second();

	// First을(를) 통해 상속됨
	virtual void Begin() override;
	virtual void End() override;

private:
};


#pragma once
#include "First.h"
class Fourth final: public First
{
public:
	Fourth(const int n1, const int n2)
		:First(n1, n2)
	{};
	~Fourth();

	// First��(��) ���� ��ӵ�
	virtual void Begin() override;
	virtual void End() override;
private:
};


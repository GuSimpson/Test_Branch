#pragma once
#include "First.h"
class Third  final : public First
{
public:Third(const int n1, const int n2)
	:First(n1, n2)
	{};
	  ~Third();
	  virtual void Begin() override;
	  virtual void End() override;

private:
};


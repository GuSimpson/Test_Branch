#pragma once

template<typename T>
class templ
{
public:
	templ(const shared_ptr<class First> inumclass);

private:
	shared_ptr<class First> numclass = nullptr;
};

template<typename T>
inline templ<T>::templ(const shared_ptr<class First> inumclass)
	: numclass(inumclass)
{
	numclass->Begin();
}

#pragma once
#include <map>

template<typename T1, typename T2>
class MyMap final
{
public:
	MyMap();
	~MyMap();

	void Insert(T1 Key, T2 value);
	
	T2& Find(T1 key);

	void Delete(T1 Key);;

	bool Is_Exis(T1 Key);

private:
	T1 Key;
	T2 Value;

	MyMap<T1, T2>* arrange;
};

// key�� �Է��ϸ�. Value ���� ���ִ� ���.
// ������ �����?
// Key�� ������ �ƴ϶��?.

//�迭�� ����Ѵٸ�. �迭�� ù��° ��� (index == 0)�ΰ��� �����Ͱ� Key
// index == 1�� ��ġ�� ������ Value.

template<typename T1, typename T2>
inline MyMap<T1, T2>::MyMap()
{
}

template<typename T1, typename T2>
inline void MyMap<T1, T2>::Insert(T1 Key, T2 value)
{
}

template<typename T1, typename T2>
inline T2& MyMap<T1, T2>::Find(T1 key)
{
	// TODO: ���⿡ return ���� �����մϴ�.
}

template<typename T1, typename T2>
inline void MyMap<T1, T2>::Delete(T1 Key)
{
}

template<typename T1, typename T2>
inline bool MyMap<T1, T2>::Is_Exis(T1 Key)
{
	return false;
}

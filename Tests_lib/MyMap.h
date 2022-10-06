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

// key를 입력하면. Value 값을 내주는 방식.
// 저장의 방식은?
// Key가 정수가 아니라면?.

//배열을 사용한다면. 배열의 첫번째 요소 (index == 0)인곳의 데이터가 Key
// index == 1인 위치의 정보가 Value.

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
	// TODO: 여기에 return 문을 삽입합니다.
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

#include <iostream>
using namespace std;

template <typename Type1, typename Type2>
class MyIterator 
{
private:
	pair<Type1, Type2>* now;
public:
	MyIterator() { ; }
	MyIterator(pair<Type1, Type2>* it) :now(it) { ; }
	pair<Type1, Type2>* get() {return now;}
	const bool operator !=(MyIterator<Type1, Type2> rigth);
	const bool operator ==(MyIterator<Type1, Type2> rigth);
	pair<Type1, Type2> & operator *()	{return *now;}
	pair<Type1, Type2> * operator ->() {return &*now;}
	MyIterator operator ++(int) { MyIterator res(*this); now++;	return res; }
	MyIterator &operator ++() { now++;	return *this; }
	~MyIterator() {now = nullptr;}
};

template <typename Type1, typename Type2>
class mymap 
{
private:
	int SZ;
	pair<Type1, Type2>* mas;
	int sort();
public:
	friend MyIterator<Type1, Type2>;
	MyIterator<Type1, Type2> begin() const;
	MyIterator<Type1, Type2> end() const;
	MyIterator<Type1, Type2> *find(Type1 &s);
	mymap<Type1, Type2>();
	~mymap();
	int insert(pair<Type1, Type2>);
	int erase(MyIterator<Type1, Type2>);
	int size() { return SZ; }
	const bool empty() const { if (SZ == 0) return 1; else return 0; }
};

//using namespace std;
//реализация
template <typename Type1, typename Type2>
const bool MyIterator<Type1, Type2>::operator != (MyIterator<Type1, Type2> rigth)
{
	if (now == rigth.now)
		return 0;
	else
		return 1;
}

template <typename Type1, typename Type2>
const bool MyIterator<Type1, Type2>::operator ==(MyIterator<Type1, Type2> rigth)
{
	if (now == rigth.now)
		return 1;
	else
		return 0;
}

template <typename Type1, typename Type2>
int operator !=(pair<Type1, Type2>* left, MyIterator<Type1, Type2> rigth)
{
	if (left == rigth.now)
		return 0;
	else
		return 1;
}

template <typename Type1, typename Type2>
int mymap<Type1,Type2>::sort()
{
	pair<Type1, Type2> temp;
	for (int i = 0; i < SZ - 1; i++)
		for (int j = 0; j < SZ - i - 1; j++)
			if (mas[j].first > mas[j + 1].first)
			{
				temp = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = temp;
			}
	return 0;
}

template <typename Type1, typename Type2>
MyIterator<Type1, Type2> mymap<Type1, Type2>::begin() const
{
	MyIterator<Type1, Type2> beg = mas;
	return beg;
}

template <typename Type1, typename Type2>
MyIterator<Type1, Type2> mymap<Type1, Type2>::end() const
{
	MyIterator<Type1, Type2> end(&(mas[SZ]));
	return end;
}

template <typename Type1, typename Type2>
MyIterator<Type1, Type2> * mymap<Type1, Type2>::find(Type1 &s)
{
	MyIterator<Type1, Type2> begin = mas;
	for (begin; begin != end(mas); begin++)
        if (begin.first == s)
			return begin;
	return end(mas);
}

template <typename Type1, typename Type2>
mymap<Type1, Type2>::mymap()
{
	mas = nullptr;
	SZ = 0;
};

template <typename Type1, typename Type2>
mymap<Type1, Type2>::~mymap<Type1,Type2>()
{
	delete[] mas;
	SZ = 0;
	mas = nullptr;
}

template <typename Type1, typename Type2>
int mymap<Type1, Type2>::insert(pair<Type1, Type2> some)
{
	SZ++;
	if (SZ == 1)
	{
		mas = new pair<Type1, Type2>[1];
		mas[0].first = some.first;
		mas[0].second = some.second;
	}
	else
	{
		mas = (pair<Type1, Type2>*)realloc(mas, sizeof(pair<Type1, Type2>)*SZ);
		mas[SZ - 1].first = some.first;
		mas[SZ - 1].second = some.second;
	}
	sort();
	return 0;
}

template <typename Type1, typename Type2>
int mymap<Type1, Type2>::erase(MyIterator<Type1, Type2> num)
{
	SZ--;
	int j = 0;
	pair<Type1, Type2>* newmas = new pair<Type1, Type2>[SZ];
	for (int i = 0; i <= SZ; i++)
	{
		if (mas[i].first != num->first)
		{
			newmas[j] = mas[i];
			j++;
		}
	}
	delete[] mas;
	mas = newmas;
	sort();
	return 0;
}

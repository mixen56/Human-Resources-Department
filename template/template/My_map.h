#ifndef My_map
#define My_map

template<class Type>
struct MyPair
{
	int key;
	Type object;
};

template <int , class Type>
class MyMap
{
public:
	MyMap() { ; }
	~MyMap();

private:
	int size;
	int amount;
	MyPair* array;
};

#endif // !


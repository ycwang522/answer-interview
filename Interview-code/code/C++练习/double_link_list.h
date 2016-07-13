template<class T> class Double;
template <class T>
class DoubleNode
{
	friend Double < T > ;
private:
	T data;
	DoubleNode<T> *left, *right;
};

template<class T>
class Double
{
public:
	Double()
	{
		leftEnd = rightend = 0;
	}

	~Double()
		;
	int Length() const;
	int Search(const T&x) const;
	Double<T>& Delete(int k, T &x);
	Double<T>& Insert(int k, cosnt T &x);
private:
	DoubleNode<T> *leftEnd,*RightEnd
};


#include<iostream>
#include<string>

using namespace std;

class libMat
{
public:
	libMat()
	{
		cout << "libMat::libMat() default constructor" << endl;
	}

	virtual ~libMat()
	{
		cout << "libMat::~libMat() default destructor" << endl;
	}

	virtual void print() const
	{
		cout << "libMat::print()-----I am a libMat object!" << endl;
	}
};

class Book :public libMat
{
protected:
	string _title;
	string _author;

public:
	Book(const string &title, const string &author) :_title(title), _author(author)
	{
		cout << "Book::Book(" << _title << "," << _author << ") constructor" << endl;
	}

	~Book()
	{
		cout << "Book::~Book() destructor" << endl;
	}

	virtual void print() const
	{
		cout << "Book::print()" << endl
			<< " My title is " << _title << endl
			<< " My author is " << _author << endl;
	}

	const string &title() const
	{
		return _title;
	}

	const string &author() const
	{
		return _author;
	}	
};

class AudioBook :public Book
{
protected:
	string _narrotor;

public:
	AudioBook(const string &title, const string &author, const string &narrator) :Book(title, title), _narrotor(narrator)
	{
		cout << "AudioBook::AudioBook() (" << _title
			<< "," << _author
			<< "," << narrator
			<< ") constructor" << endl;
	}

	~AudioBook()
	{
		cout << "AudioBook::~~AudioBook() destructor" << endl;
	}

	virtual void print()const
	{
		cout << "AudioBook::print() ---I am an AudioBook object" << endl;
	}

	const string &narrator() const
	{
		return _narrotor;
	}

};

int main()
{
	AudioBook Audio("Matina", "My world","It's so hard");

	cout << "The title is " << Audio.title() << endl;
	cout << "The autohr is " << Audio.author() << endl;
	cout << "The rarrotor is " << Audio.narrator() << endl;

	system("pause");
}

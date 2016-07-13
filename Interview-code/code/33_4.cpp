//Essential C++面向对象编程思维

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
		cout << "libMat::~libMat() destructor" << endl;
	}

	virtual const void print() const
	{
		cout << "libMat::print() --I'm a libMat object!" << endl;
	}

};

class Book :public libMat
{
public:
	Book(const string &title, const string &author) :_title(title), _author(author)
	{
		cout << "Book::Book()(" << _title << _author << ") constructor." << endl;
	}
	virtual ~Book()
	{
		cout << "Book::~Book() destructor" << endl;
	}

	virtual const void print() const
	{
		cout << "Book::print() " << endl
			<< "Title is " << _title << endl
			<< "Author is " << _author << endl;
	}

	const string title() const
	{
		return _title;
	}

	const string author() const
	{
		return _author;
	}

protected:
	string _author;
	string _title;
};

class AudioBook :public Book
{
public:
	AudioBook(const string &title, const string &author, const string &narrator) :Book(title, author), _narrator(narrator)
	{
		cout << "AudioBook::AudioBook()(" << _title << "," << _author << "," << _narrator << ") constructor" << endl;
	}

	~AudioBook()
	{
		cout << "AudioBook::AudioBook() destructor" << endl;
	}

	const void print() const
	{
		cout << "AudioBook::print()--I'm a AudioBook object!" << endl
			<< "My title is " << _title << endl
			<< "My author is " << _author << endl
			<< "The narrator is " << _narrator << endl;
	}

	const string &narrator() const
	{
		return _narrator;
	}

protected:
	string _narrator;
};

int main()
{
	AudioBook audio1("Max is happy", "Max", "It is so hard");

	cout << "The Title is" << audio1.title() << endl;
	cout << "The author is " << audio1.author() << endl;
	cout << "The narrator is " << audio1.narrator() << endl;
	audio1.print();
}


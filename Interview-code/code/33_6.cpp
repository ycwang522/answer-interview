#include<iostream>
#include<string>
#include<vector>

using namespace std;

class num_sequence
{
public:
	virtual ~num_sequence() {}
	virtual const char* what_i_am()const = 0;

	int				elem(int pos)const;
	ostream&		print(ostream &os = cout)const;

	int				length()const { return _length; }
	int				beg_pos()const{ return _beg_pos; }
	static int		mex_elems() { return 64; }

protected:
	int				_length;
	int				_beg_pos;
	vector<int>		&_relems;
	virtual void	gen_elems(int pos)const = 0;
	bool			check_int(int pos, int size) const;

	num_sequence(int len, int bp, vector<int> &re) :_length(len), _beg_pos(bp), _relems(re)	{}


};
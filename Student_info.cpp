// Student_info cpp
#include "Student_info.h"

using std::istream;	using std::vector;

// func: compare
bool compare( const Student_info& x, const Student_info& y )
{
	return x.name < y.name;
}

// func: read
istream& read( istream& is, Student_info& s )
{
	is >> s.name >> s.midterm >> s.final;

	read_hw( is, s.homework );
	return is;
}

// func: read_hw
istream& read_hw( istream& in, vector<double>& hw )
{
	if ( in )
	{
		hw.clear();
		
		double x;
		while ( in >> x )
			hw.push_back(x);

		in.clear();
	}
	return in;
}

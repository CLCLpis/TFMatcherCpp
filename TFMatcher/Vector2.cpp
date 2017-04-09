#include "Vector2.h"

Vector2::Vector2() : element1(0), element2(0)
{
}

Vector2::Vector2(double _element1, double _element2) : element1(_element1), element2(_element2)
{
}

/*Vector2 Vector2::operator=(const Vector2& _other)
{
	return Vector2(_other.GetElement1(), _other.GetElement2());
}*/

double Vector2::GetElement1() const
{
	return element1;
}

double Vector2::GetElement2() const
{
	return element2;
}

double Vector2::Dot(Vector2 _otherVec) const
{
	return element1*_otherVec.element1 + element2*_otherVec.element2;
}

double Vector2::Magnitude() const
{
	return sqrt(element1*element1 + element2*element2);
}

string Vector2::ToString() const
{
	ostringstream ss;
	ss << element1 << ", " << element2;
	return ss.str();
}
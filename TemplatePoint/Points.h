#pragma once
#include <iostream>

template <typename T>
class CartPoint
{
private:
	T x, y;
public:
	CartPoint() : x(T()), y(T()) {}
	CartPoint(T a, T b) : x(a), y(b) {}
	T get_x() const { return x; }
	T get_y() const { return y; }
	void print_on(std::ostream& os) const
	{
		os << '(' << x << "; " << y << ')';
	}
	double distance(const CartPoint& p) const;
};

template<typename T>
inline double CartPoint<T>::distance(const CartPoint& p) const
{
	return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const CartPoint<T>& p)
{
	p.print_on(os); return os;
}

template <typename T>
CartPoint<T> ReadPoint(std::istream& stream)
{
	T x, y;
	stream >> x >> y;
	return CartPoint<T>(x, y);
}
#pragma once
#include <iostream>
#include <cmath>
#include "vec3.h"
using namespace std;

template <class T>
class vec3
{
public:

	T x, y, z;

	// 3 constructors
	vec3(float _x, float _y, float _z);
	vec3(float value);
	vec3();
	

	// operators
	vec3<T> operator+(const vec3<T>& vector) const;
	vec3<T> operator-(const vec3<T>& vector) const;
	bool operator==(const vec3<T>& vector) const;
	void operator=(const vec3<T>& vector); // Changes the value
	void operator+=(const vec3<T>& vector); // Changes the value
	void operator-=(const vec3<T>& vector); // Changes the value
	
	

	// Methods
	void Normalize(); //Magnitude of vectors is set to 1.
	void Zero(); //Every member is set to zero
	bool IsZero() const; //Checks if any member is 0
	float DistanceTo(const vec3<T>& vector) const; //Calculates the distance between 2 vectors

	~vec3(); //Destructor
};

template<class T>
vec3<T>::vec3()
{
	x = 0;
	y = 0;
	z = 0;
}

//Initialise the vector with 3 members
template<class T>
vec3<T>::vec3(float vx, float vy, float vz)
{
	x = vx;
	y = vy;
	z = vz;
}

//Initialises the vector with the same number
template<class T>
vec3<T>::vec3(float num)
{
	x = num;
	y = num;
	z = num;
}

//Plus operator
template<class T>
vec3<T> vec3<T>::operator+(const vec3<T>& v) const
{

	vec3<T> result;

	result.x = x + v.x;
	result.y = y + v.y;
	result.z = z + v.z;

	return result;

}

template<class T>
vec3<T> vec3<T>::operator-(const vec3<T>& vec) const
{

	vec3<T> result;

	result.x = x - vec.x;
	result.y = y - vec.y;
	result.z = z - vec.z;

	return result;

}

template<class T>
void vec3<T>::operator=(const vec3<T>& vec)
{
	x = vec.x;
	y = vec.y;
	z = vec.z;

}

template<class T>
void vec3<T>::operator+=(const vec3<T>& vec)
{

	x += vec.x;
	y += vec.y;
	z += vec.z;

}

template<class T>
void vec3<T>::operator-=(const vec3<T>& vec)
{

	x -= vec.x;
	y -= vec.y;
	z -= vec.z;

}


template<class T>
bool vec3<T>::operator==(const vec3<T>& vec) const
{
	return x == vec.x &&
		y == vec.y &&
		z == vec.z;
}

template<class T>
void vec3<T>::Normalize()
{
	float magnitude = sqrtf(x * x + y * y + z * z);

	x = x / magnitude;
	y = y / magnitude;
	z = z / magnitude;
}

template<class T>
void vec3<T>::Zero()
{
	x = 0;
	y = 0;
	z = 0;
}

template<class T>
bool vec3<T>::IsZero() const
{
	return x == 0 && y == 0 && z == 0;
}

template<class T>
float vec3<T>::DistanceTo(const vec3<T>& vec) const
{
	vec3<T> diff(vec.x - x, vec.y - y, vec.z - z);

	return sqrtf(diff.x * diff.x + diff.y * diff.y + diff.z * diff.z);
}

template<class T>
vec3<T>::~vec3()
{
}
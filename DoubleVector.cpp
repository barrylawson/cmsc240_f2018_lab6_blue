#ifndef __DOUBLE_VECTOR_CPP__
#define __DOUBLE_VECTOR_CPP__

#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"

DoubleVector::DoubleVector()  {}
DoubleVector::~DoubleVector() {}

int DoubleVector::size() 
{
   return doubleVector.size();
}

// just return the double at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
double DoubleVector::get(int index) 
{ 
   return doubleVector.at(index);
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void DoubleVector::put(double value, int index)
{
	if(index > size())
		doubleVector.push_back(value);
	else
		doubleVector.at(value) = value;
}

// use push_back to append
void DoubleVector::put(double value)
{
	doubleVector.push_back(value);
}

// for each integer in integerVector, use static_cast<double> to append as a
// double to doubleVector
void DoubleVector::appendIntegerVector(IntegerVector& integerVector)
{
}

// for each character in characteVector, use static_cast<double> to append as a
// double to doubleVector
void DoubleVector::appendCharacterVector(CharacterVector& characterVector)
{
}

#endif

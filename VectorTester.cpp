#include <iostream>
#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"
#include <stdexcept>

int main()
{
   IntegerVector   iv;
   DoubleVector    dv;
   CharacterVector cv;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   // }
   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "----------------" << std::endl;


   std::cout << "Putting '65' and '66' in integer vector" << std::endl;
   iv.put(65);
   iv.put(66,1);
   std::cout << "Testing get method for 0 index: " << iv.get(0) << std::endl;
   std::cout << "Testing get method for 1 index: " << iv.get(1) << std::endl;
   std::cout << "Testing  the size method: " <<  iv.size() << std::endl;
   std::cout << "Testing an out of range vale index 100: ";
   try
   {
     std::cout << iv.get(100) << std::endl;
  }
  catch(const std::out_of_range& oor)
  {
     std::cout <<"Error out of bounds!" << std::endl;
  }

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   // }
  std::cout << std::endl;
  std::cout << "----------------" << std::endl;
  std::cout << "CharacterVector:" << std::endl;
  std::cout << "----------------" << std::endl;

  std::cout << "Putting 'a' and '2' in character vector" << std::endl;
  cv.put('a');
  cv.put('2', 1);
  
  
  
  std::cout << "Testing get method for 0 index: " << cv.get(0) << std::endl;
  std::cout << "Testing get method for 1 index: " << cv.get(1) << std::endl;
  std::cout << "Testing  the size method: " <<  cv.size() << std::endl;
  std::cout << "Testing an out of range vale index 100: ";
  try 
  {
     std::cout << cv.get(100) << std::endl;
  }

  catch(const std::out_of_range& oor) 
  {
   std::cout <<"Error out of bounds!" << std::endl;

}

std::cout << "--------------------" << std::endl;
   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

  std::cout << std::endl;
  std::cout << "----------------" << std::endl;
  std::cout << "DoubleVector:" << std::endl;
  std::cout << "----------------" << std::endl;

  std::cout << "Putting '77.0' and '65.0' in double vector" << std::endl;
  
  dv.put(77.0);
  dv.put(65.0, 1);

  std::cout << "Testing get method for 0 index: " << dv.get(0) << std::endl;
  std::cout << "Testing get method for 1 index: " << dv.get(1) << std::endl;
  std::cout << "Testing  the size method: " <<  dv.size() << std::endl;
  std::cout << "Testing an out of range vale index 100: ";

  try {
     std::cout << dv.get(100) << std::endl;
  }

  catch(const std::out_of_range& oor) {
   std::cout <<"Error: out of bounds!" << std::endl;
  }

std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
IntegerVector iv2;

std::cout << std::endl;
std::cout << "--------------------------" << std::endl;
std::cout << "appended-to IntegerVector:" << std::endl;
std::cout << "--------------------------" << std::endl;

std::cout << "In CV: " << std::endl;
for(int i = 0; i < cv.size(); i++)
{
	std::cout << cv.get(i) << std::endl;
}

std::cout << "In DV: " << std::endl;
for(int i = 0; i < dv.size(); i++)
{
	std::cout << dv.get(i) << std::endl;
}

iv2.appendCharacterVector(cv);
iv2.appendDoubleVector(dv);

std::cout << "In IV2: " << std::endl;
for(int i = 0; i < iv2.size(); i++)
{
	std::cout << iv2.get(i) << std::endl;
}
   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
CharacterVector cv2;

std::cout << std::endl;
std::cout << "----------------------------" << std::endl;
std::cout << "appended-to CharacterVector:" << std::endl;
std::cout << "----------------------------" << std::endl;

std::cout << "In IV: " << std::endl;
for (int i = 0; i < iv.size(); ++i)
{
   std::cout << iv.get(i) << std::endl;
}

std::cout << "In DV: " << std::endl;
for (int i = 0; i < dv.size(); ++i)
{
   std::cout << dv.get(i) << std::endl;
}

cv2.appendIntegerVector(iv);
cv2.appendDoubleVector(dv);

std::cout << "In CV2: " << std::endl;
for (int i = 0; i < cv2.size(); ++i)
{
   std::cout << cv2.get(i) << std::endl;  
}

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
DoubleVector dv2;

std::cout << std::endl;
std::cout << "-------------------------" << std::endl;
std::cout << "appended-to DoubleVector:" << std::endl;
std::cout << "-------------------------" << std::endl;

std::cout << "In CV: " << std::endl;
for (int i = 0; i < cv.size(); ++i)
{
   std::cout << cv.get(i) << std::endl;
}

std::cout << "In IV: " << std::endl;
for (int i = 0; i < iv.size(); ++i)
{
   std::cout << iv.get(i) << std::endl;
}
dv2.appendIntegerVector(iv);
dv2.appendCharacterVector(cv);

std::cout << "In DV2: " << std::endl;

for(int i = 0; i < dv2.size(); i++) {
    std::cout << dv2.get(i) << std::endl;
   }

   //-------------------------------------------------------------------------

return 0;
}

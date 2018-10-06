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
	std::cerr << "Out of Range error:" << oor.what() << '\n'<< std::endl;
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
   cv.put('2');
 
   
 
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
   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range
   dv.put(77.0);
   dv.put(65.0, 3);
   std::cout << dv.get(1) << std::endl;
   std::cout << dv.size() << std::endl;
   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   try
   {
      std::cout << dv.get(100) << std::endl;
   }
   catch(const std::out_of_range& oor) {
      std::cout << "Error: out of bounds!" << std::endl;
   }

   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}

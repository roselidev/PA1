//--------------------------------------------------------------
// 
//  4190.308 Computer Architecture (Spring 2019)
//
//  Project #1: Converting Fixed-Point to Floating-Point
//
//  March 20, 2019
//
//  Jin-Soo Kim (jinsoo.kim@snu.ac.kr)
//  Systems Software & Architecture Laboratory
//  Dept. of Computer Science and Engineering
//  Seoul National University
//
//--------------------------------------------------------------


#include <stdio.h>
#include "pa1.h"


// fix2double() returns the double-precision floating-point value for 
// the given fixed-point value 'a'. Note that 'a' is represented in 
// 21.10 fixed-point format.
double fix2double (fixp a)
{

  //get the integer part
  double intPart=(int)a>>10;
  //get the frac part
  float fracPart =  a & 0b00000000000000000000001111111111;
  fracPart = fracPart/(0b10000000000);
  double ans=0;
  ans=intPart+fracPart;
  return ans;
}

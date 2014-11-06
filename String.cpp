#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;

//  constructor that initializes from an array of char
String::String(char *init)
{
//  find the length of the initializing array (look
//  for null byte)
   len = 0;
   while (init[len] != '\0')
      len++;

//  allocate space and copy chars into invoking obj
   theChars = new char[len];
   for (int i = 0 ; i < len ; i++)
      theChars[i] = init[i];
}

//  copy constructor
String::String(String& old)
{
//  check whether we are copying the empty string
   len = old.len;
   if (len == 0)
      theChars = NULL;

//  if not, copy the chars into the new array and
//  copy the length
   else
   {
      theChars = new char[len];
      for (int i = 0 ; i < len ; i++)
         theChars[i] = old.theChars[i];
   }
}

//  destructor
String::~String()
{
   if (len > 0)
      delete [] theChars;
}

//  overloaded << operator to print a String
ostream& operator<<(ostream& out, String& prt)
{
   for (int i = 0 ; i < prt.len ; i++)
      out << prt.theChars[i];
   return out;
}

//  overloaded >> operator to print a String
istream& operator>>(istream& in, String& prt)
{
   in >> prt.theChars;
   return in;
}

//  concatenate the parm and the invoking String and
//  return the resulting String
String String::operator+(const String& two) const
{
   String result;
   int i;

//  if both Strings are empty, result is empty too
   if (len == 0 && two.len == 0)
   {
      result.len = 0;
      result.theChars = NULL;
   }
   else
   {

//  find length of the result and get space for it
      result.len = len + two.len;
      result.theChars = new char[result.len];

//  copy the invoking String into the new String
      for (i = 0 ; i < len ; i++)
	     result.theChars[i] = theChars[i];

//  copy the parm at the end of the new String
      int j = 0;
      while (j < two.len)
	  {
	     result.theChars[i] = two.theChars[j];
	     i++;
	     j++;
	  }
   }
   return result;
}

//  return the character at the given position in the
//  parm ch. if position is invalid return false;
//  otherwise return true
int String::at(int position, char& ch) const
{
   int returnCode = 0;
   if (position >= 0 && position < len)
   {
      ch = theChars[position];
      returnCode = 1;
   }
   return returnCode;
}

//  test whether two Strings are equal; return true if
//  so, false if not
int operator==(const String &one, const String& two)
{
   int ret = 1;
   if (one.len != two.len)
      ret = 0;
   else
      for (int i = 0 ; i < one.len && ret == 1 ; i++)
         if (one.theChars[i] != two.theChars[i])
	        ret = 0;
  return ret;
}

//  test whether a String object contains the same
//  string as an array of char
int operator==(const String& one, char *chstr)
{
   int equal = 1;
   int stlen = 0;

//  find the length of the array of characters
   while (chstr[stlen] != '\0')
      stlen++;

//  if the lengths are equal, check whether all the
//  characters are equal
   if (one.len == stlen)
      for (int i = 0 ; i < one.len ; i++)
      {
	     if (one.theChars[i] != chstr[i])
	        equal = 0;
      }
   else
      equal = 0;
  return equal;
}

//  test whether a String object contains the same
//  string as an array of char
int operator==(char *chstr,const String& one)
{
   int equal = 1;
   int stlen = 0;

//  find the length of the array of characters
   while (chstr[stlen] != '\0')
      stlen++;

//  if the lengths are equal, check whether all the
//  characters are equal
   if (one.len == stlen)
      for (int i = 0 ; i < one.len ; i++)
      {
	     if (one.theChars[i] != chstr[i])
	        equal = 0;
      }
   else
      equal = 0;
   return equal;
}

//  copy the parm into the invoking object
String& String::operator=(const String& two)
{
   if (theChars != 0)
      delete [] theChars;
   len = two.len;
   theChars = new char[len];
   for (int i = 0 ; i < len ; i++)
      theChars[i] = two.theChars[i];
   return *this;
}


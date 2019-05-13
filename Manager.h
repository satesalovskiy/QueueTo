#pragma once
#include <iostream>
class Manager
{
public:
	int currNumberVen;
	int currNumberCon;
	const int maxNumberVen =3;

	/*int Observe3()
	{
		if (mqueue.size() >= 8)
		{
			return 3;
		}
		
	}*/

	 int GetMN() const
	{
		return maxNumberVen;
	}
	 void SetCNV(int n)
	 {
		 this->currNumberVen = n;
	 }
	 int GetCNV() 
	 {
		 return currNumberVen;
	 }
};


#pragma once
#include <iostream>
#include <mutex>
using namespace std;
mutex mtx;
class Vendor
{
public:
	int id;
	int wExp;
	int xSprite;
	int ySprite;

	Vendor()
	{
		id = 0;
		wExp = rand()%8;
		xSprite = 0;
		ySprite = 0;
	}

	void Work(int op)
	{
		this->SetId(1);
		//mtxs.lock();
		if (op == 1)
		{
			if (wExp > 5)
			{
				mtx.lock();
				cout << "Experienced Vendor with thread id = " << this_thread::get_id() << " work" << endl;
				mtx.unlock();
				this_thread::sleep_for(chrono::milliseconds(2000));
				mtx.lock();
				cout << "Experienced Vendor with thread id = " << this_thread::get_id() << " has finished the work" << endl;
				mtx.unlock();
			}
			else
			{
				mtx.lock();
				cout << "Vendor with thread id = " << this_thread::get_id() << " work" << endl;
				mtx.unlock();
				this_thread::sleep_for(chrono::milliseconds(4000));
				mtx.lock();
				cout << "Vendor with thread id = " << this_thread::get_id() << " has finished the work" << endl;
				mtx.unlock();
			}
		}
		else if (op == 2)
		{
			if (wExp > 5)
			{
				mtx.lock();
				cout << "Experienced Vendor with thread id = " << this_thread::get_id() << " work" << endl;
				mtx.unlock();
				this_thread::sleep_for(chrono::milliseconds(4000));
				mtx.lock();
				cout << "Experienced Vendor with thread id = " << this_thread::get_id() << " has finished the work" << endl;
				mtx.unlock();
			}
			else
			{
				mtx.lock();
				cout << "Vendor with thread id = " << this_thread::get_id() << " work" << endl;
				mtx.unlock();
				this_thread::sleep_for(chrono::milliseconds(8000));
				mtx.lock();
				cout << "Vendor with thread id = " << this_thread::get_id() << " has finished the work" << endl;
				mtx.unlock();
			}
		}
		//mtxs.unlock();
	}

	int GetId()
	{
		return id;
	}
	void SetId(int o)
	{
		this->id = o;
	}

	int GetXSprite()
	{
		return xSprite;
	}
	int GetYSprite()
	{
		return ySprite;
	}

	void SetXSprite(int x)
	{
		this->xSprite = x;
	}
	void SetYSprite(int y)
	{
		this->ySprite = y;
	}
};
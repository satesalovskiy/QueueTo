#pragma once

#pragma once
#include <iostream>


class Consumer
{
public:
	int operation;
	int name;
	int xSprite;
	int ySprite;
	int id;

	Consumer ()
	{
		name = 0;
		operation = 0;
		xSprite = 0;
		ySprite = 0;
	}


	int GetOperation()
	{
		return operation;
	}
	void SetOperation(int o)
	{
		this->operation = o;
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

	void SetName(int n)
	{
		this->name = n;
	}
	int GetName()
	{
		return name;
	}

	int GetId()
	{
		return id;
	}
	void SetId(int o)
	{
		this->id = o;
	}

};
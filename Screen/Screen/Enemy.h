#pragma once
#include "GameObject.h"
class Enemy :
	public GameObject
{
public:
	Enemy(int pos, const char* face);
	virtual ~Enemy();
	void moveRandom();
	void update(GameObject* objects[], int maxObjects);
};


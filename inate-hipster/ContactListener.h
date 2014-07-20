#pragma once

#include <Box2D\Box2D.h>

#include "Entity.h"

class ContactListener :
	public b2ContactListener
{
public:
	ContactListener();
	~ContactListener();

	void BeginContact(b2Contact* contact);
	void EndContact(b2Contact* contact);
};

#pragma once
#include "item.h"
#include "key.h"
#include <iostream>
class Lock :  public Item
{
public:
	Lock(std::vector<std::string> profile);
	bool is_compatible(Key* key);
};

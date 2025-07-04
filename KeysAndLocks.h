#pragma once
#include <vector>
#include "item.h"
#include "key.h"
#include "lock.h"

struct keys_and_locks
{
	std::vector<Key> keys;
	std::vector<Lock> locks;
};
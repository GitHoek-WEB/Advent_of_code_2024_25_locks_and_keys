#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "item.h"
#include "lock.h"
#include "key.h"
#include "type_enum.h"
#include "KeysAndLocks.h"


class DataParser
{
public:
	keys_and_locks get_keys_and_locks(std:: string filepath);
};


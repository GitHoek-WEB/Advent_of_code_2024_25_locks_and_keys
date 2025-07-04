#pragma once
#include "item.h"
#include "type_enum.h"

class ItemFactory {

public:
	Item* create_item(item_type item_type, std::vector<std::string> profile);
};
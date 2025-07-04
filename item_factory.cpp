#include "item_factory.h"
#include "key.h"
#include "lock.h"

Item* ItemFactory::create_item(item_type item_type, std::vector<std::string> profile)
{
	Item* item = nullptr;
	if (item_type == item_type::KEY)
	{
		item = new Key(profile);
	}
	if (item_type == item_type::LOCK)
	{
		item = new Lock(profile);
	}
	return item;
}
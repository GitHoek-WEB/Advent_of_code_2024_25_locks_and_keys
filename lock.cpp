#include "lock.h"

Lock::Lock(std::vector<std::string> PROFILE) : Item(PROFILE)
{

}

bool Lock::is_compatible(Key* key)
{
	bool compatible = true;
	std::vector<int> key_height_map = key->get_height_map();
	std::vector<int> lock_height_map = get_height_map();
	std::vector<int> combined_height_map;
	for (int i = 0; i = key_height_map.size(); i++)
	{
		int sum = key_height_map[i] + lock_height_map[i];
		if (sum > 5)
		{
			compatible = false;
			break;
		}
	}
	return compatible;
}
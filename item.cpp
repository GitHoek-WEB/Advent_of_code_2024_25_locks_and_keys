#include "item.h"

Item::Item(std::vector<std::string> PROFILE)
{
	set_profile(PROFILE);
	height_map = create_height_map();
}

void Item::set_profile(std::vector<std::string> PROFILE)
{
	profile = PROFILE;
}

void Item::print_content()
{
	for (std::string line : profile)
	{
		std::cout << line << std::endl;
	}
}

std::vector<std::string> Item::get_profile(void)
{
	return profile;
}

std::vector<int> Item::create_height_map(void)
{
	height_map.clear();

	for (int i = 0; i < profile[0].size(); i++)
	{
		height_map.push_back(-1);
	}

	for (int height = 0; height < profile.size(); height++)
	{
		std::string row = profile[height];
		std::cout << row << std::endl;
		for (int item_index = 0; item_index < profile[0].size(); item_index++)
		{
			std::cout << row[item_index] << std::endl;
			if (row[item_index] == '#')
				height_map[item_index]++;
		}
	}

	return height_map;
}

std::vector<int> Item::get_height_map(void)
{
	return height_map;
}
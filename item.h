#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "type_enum.h"

class Item
{
public:
	Item(std::vector<std::string> PROFILE);
	void set_profile(std::vector<std::string> PROFILE);
	void print_content(void);
	void print_height_map(void);
	std::vector<std::string> get_profile(void);
	std::vector<int> get_height_map(void);
private:
	std::vector<int> create_height_map(void);
	std::vector<int> height_map;
	std::vector<std::string> profile;
	enum type;
};

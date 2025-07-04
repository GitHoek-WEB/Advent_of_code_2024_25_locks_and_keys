#include "data_parser.h"

keys_and_locks DataParser::get_keys_and_locks(std::string filepath)
{
    bool new_item = true;
    std::ifstream input_file(filepath);
    std::string line;
    std::vector<std::string> profile;
    std::vector<Key> keys;
    std::vector<Lock> locks;

    while (std::getline(input_file, line, '\n'))
    {
        if (line.size() == 5)
        {
            profile.push_back(line);
        }

        else if (line.size() == 0)
        {
            if (profile[0] == "#####")
            {
                Lock lock(profile);
                locks.push_back(lock);
            }
            else if ((profile[0] == "....."))
            {
                Key key(profile);
                keys.push_back(key);
            }
            profile.clear();
        }
    }
    keys_and_locks keys_and_locks;
    keys_and_locks.keys = keys;
    keys_and_locks.locks = locks;
    return keys_and_locks;

}
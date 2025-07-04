// Advent_of_code_2024_25_locks_and_keys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "item.h"
#include "data_parser.h"
#include "KeysAndLocks.h"
#include "key.h"
#include "lock.h"

int main()
{
    DataParser data_parser;
    keys_and_locks keys_and_locks;
    keys_and_locks =  data_parser.get_keys_and_locks("Advent_of_code_2024_25_locks_and_keys.csv");
    std::vector<Key> keys = keys_and_locks.keys;
    std::vector<Lock> locks = keys_and_locks.locks;
    int unique_combinations = 0;
    for (int lock_index = 0; lock_index < locks.size(); lock_index++)
    {
        for (int key_index = 0; key_index < keys.size(); key_index++)
        {
            Lock* lock = &locks[lock_index];
            Key* key = &keys[key_index];
            lock->print_height_map();
            key->print_height_map();
            lock->is_compatible(key);

            if (lock->is_compatible(key))
            {
                unique_combinations++;
            }
        }
    }
    std::cout << "unique_combinations: " << unique_combinations;
}
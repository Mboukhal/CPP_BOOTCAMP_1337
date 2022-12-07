#pragma once
#include <cstdint>
#include <string>
#include <iostream>

typedef struct Data_s {

	char flag;
	std::string msg;
	int end;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

std::ostream& operator << ( std::ostream& OUT, const Data& OBJ );
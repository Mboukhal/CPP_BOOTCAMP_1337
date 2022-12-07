#include "serial.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

std::ostream& operator << ( std::ostream& OUT, const Data& OBJ ) {
	
	OUT << "Falg:    " << '"' << OBJ.flag << '"' << std::endl
		<< "Message: " << '"' << OBJ.msg << '"' << std::endl
		<< "End:     " << '"' << OBJ.end << '"' << std::endl;
	
	return OUT;
}
#include "Serialization.hpp"

int main(void)
{
	Data data = 
	{
		.med  = 900
	};

	std::cout << "initial med ==> " << data.med << std::endl;
	std::cout << "intial data address ==> " << &data << std::endl;
	std::cout << "current data address ==> 0x" << std::hex << Serialization::serialize(&data) << std::endl;
	std::cout << Serialization::deserialize(Serialization::serialize(&data))->med << std::endl;
}

#include "data.h"
#include <cstdlib>
#include <cassert>

void boost::throw_exception(std::exception const&)
{
	assert(false);
}

int main()
{
	Data::Convert();

	return EXIT_SUCCESS;
}

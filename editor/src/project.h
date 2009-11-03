#ifndef __project__
#define __project__

#include <wx/string.h>
#include <vector>
#include "ldbReader.h"
#include "strProject.h"

class Project {

public:
	Project();
	~Project();

public:
	std::vector<strActors> heros;
	std::vector<strSkills> skills;
	
	bool Import(LDB_data& ldb);
};
#endif // __project__

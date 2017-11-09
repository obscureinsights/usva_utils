#include "usva_utils.hpp"

namespace usva
{
	namespace cvarlib
	{
		cvar::cvar( const std::string &name, const std::string &section )
		{
			this->name = name;
			this->section = section;
		}
	}
}
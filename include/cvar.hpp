#pragma once

namespace usva
{
	namespace cvarlib
	{
		class cvar
		{
		private:
			std::string name;
			std::string section;
		public:
			cvar( const std::string &name, const std::string &section );
		};
	}
}
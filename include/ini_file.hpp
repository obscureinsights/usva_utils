#pragma once

namespace usva
{
	namespace cvarlib
	{
		class ini_file
		{
		private:
			bool exists = false;
			std::string path;
		public:
			explicit ini_file( const std::string &path );
			bool init( void ) const;
			void ini_file::load( void );
			void ini_file::save( void );
		};
	}
}
#include "usva_utils.hpp"

namespace usva
{
	namespace cvarlib
	{
		ini_file::ini_file( const std::string &path )
		{
			this->path = path;
			this->exists = init();
		}

		bool ini_file::init( void ) const
		{
			return std::experimental::filesystem::exists( this->path );
		}

		void ini_file::load( void )
		{
			if( exists == false )
				return;
			
			std::ifstream in( this->path );

			if( in.is_open() == false )
				return;

			std::string cur_line;
			while ( std::getline( in, cur_line ) )
			{
				if( cur_line.empty() == false )
				{
					const std::regex exp( "\\[(.*)\\]");
					std::smatch exp_match;

					if (std::regex_match(cur_line, exp_match, exp)) {
						// exp_match[1] = section_title 
					}
				}
			}
		}

		void ini_file::save( void )
		{
			if ( exists == false )
				return;
			
		}
	}
}
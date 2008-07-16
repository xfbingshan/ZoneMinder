//
// ZoneMinder General Utility Functions, $Date: 2007-08-29 18:34:33 +0100 (Wed, 29 Aug 2007) $, $Revision: 2168 $
// Copyright (C) 2003-2008  Philip Coombes
// 
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
// 

#ifndef ZM_UTILS_H
#define ZM_UTILS_H

#include <string>
#include <vector>

typedef std::vector<std::string> StringVector;

const std::string stringtf( const char *format, ... );
const std::string stringtf( const std::string &format, ... );

bool startsWith( const std::string &haystack, const std::string &needle );
StringVector split( const std::string &string, const std::string chars );

const std::string base64Encode( const std::string &inString );

#endif // ZM_UTILS_H
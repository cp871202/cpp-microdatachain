/*
	This file is part of cpp-microdatachain.

	cpp-microdatachain is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	cpp-microdatachain is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with cpp-microdatachain.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <libdevcore/Exceptions.h>
#include <json_spirit/JsonSpiritHeaders.h>
#include <set>
#include <string>

namespace dev
{
// Throws UnknownField() if _obj contains field names not listed in _allowedFields.
void validateFieldNames(json_spirit::mObject const& _obj, std::set<std::string> const& _allowedFields);
}

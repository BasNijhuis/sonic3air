/*
*	Part of the Oxygen Engine / Sonic 3 A.I.R. software distribution.
*	Copyright (C) 2017-2021 by Eukaryot
*
*	Published under the GNU GPLv3 open source software license, see license.txt
*	or https://www.gnu.org/licenses/gpl-3.0.en.html
*/

#pragma once

#include "lemon/compiler/Token.h"


namespace lemon
{

	class API_EXPORT Define
	{
	friend class Module;

	public:
		inline const std::string& getName() const  { return mName; }
		inline const DataTypeDefinition* getDataType() const  { return mDataType; }

	public:
		TokenList mContent;

	private:
		std::string mName;
		const DataTypeDefinition* mDataType = nullptr;
	};

}

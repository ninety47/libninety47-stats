#ifndef NINETY47_STATS_HEADER_INCLUDED_930182
#define NINETY47STATS_API __declspec(dllexport)
/*
Copyright 2013 Michael O'Keeffe (a.k.a. ninety47).

This file is part of ninety47 Dukascopy toolbox.

The "ninety47 stats library" is free software: you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation, either version 3 of the License,
or any later version.

"ninety47 stats library" is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
Public License for more details.

You should have received a copy of the GNU General Public License along with
"ninety47 stats library". If not, see <http://www.gnu.org/licenses/>.

The source code is maintained on GitHub at https://github.com/ninety47/libninety47-stats
Follow me on Twitter: https://twitter.com/ninety47
Home page: http://www.ninety47.com
*/

extern "C" {
	NINETY47STATS_API double __stdcall pearsons(int n, double x[], double y[]);
	// See ninety47-stats.cpp for documentation.
}

#endif // NINETY47_STATS_HEADER_INCLUDED_930182
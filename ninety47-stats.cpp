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


#include "stdafx.h"
#include "ninety47-stats.h"
#include <math.h>

extern "C" {
	/**
	 * \brief Implementation of the Persaons product moment correlation coefficient function.
	 *
	 *	For information about the correlation method implemented here please visit:
	 *	http://en.wikipedia.org/wiki/Pearson_product-moment_correlation_coefficient
	 *  The function was structured around being called from Metatrader 4. It assumed the data
	 *  is supplied most recent to oldest indexed from 0 (recent) to N (an unknown length) BUT
	 *  it is assumed that the length of the x and y arrays is greater than n.
	 *
	 * \param n the number of values to include in the correlation calculations e.g. 50.
	 * \param x the first time series that will be correlated with the other time series, y.
	 * \param y the 2nd time series.
	 * \return The correlation coefficient of the n values from x and y.
	 */
	NINETY47STATS_API double __stdcall pearsons(int n, double x[], double y[]) {
		int index;
		double sx = 0.0;
		double sy = 0.0;
		double xbar = 0.0;
		double ybar = 0.0;
		double r = 0.0;

		// Two passes
		// i) Calculate means
		for (index = 0; index < n; index++) {
			xbar += x[index];
			ybar += y[index];
		}
		xbar /= ((double) n);
		ybar /= ((double) n);

		// ii) Std deviations and unscaled correlation.
		for (index = 0; index < n; index++) {
			sx += ((x[index] - xbar) * (x[index] - xbar));
			sy += ((y[index] - ybar) * (y[index] - ybar));
			r += (x[index] - xbar)*(y[index] - ybar);
		}
	
		// Scale parameters
		sx = sqrt( sx/(n-1.0) );
		sy = sqrt( sy/(n-1.0) );

		// Scale r
		r /= ((n-1)*sx*sy);
		return r;
	}
};
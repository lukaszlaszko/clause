/*~
 * Copyright (C) 2013 - 2016 George Makrydakis <george@irrequietus.eu>
 * 
 * This file is part of 'clause', a highly generic C++ meta-programming library,
 * subject to the terms and conditions of the Mozilla Public License v 2.0. If
 * a copy of the MPLv2 license text was not distributed with this file, you can
 * obtain it at: http://mozilla.org/MPL/2.0/.
 * 
 * The 'clause' library is an experimental library in active development with
 * a source code repository at: https://github.com/irrequietus/clause.git and
 * issue tracker at https://github.com/irrequietus/clause/issues.
 * 
 */

#ifndef CLAUSE_PPMPF_PPFK_HH
#define CLAUSE_PPMPF_PPFK_HH

#include <clause/ppmpf/kernel/cpro/base.hh>
#include <clause/ppmpf/algorithms/fold.hh>
#include <clause/ppmpf/collections/tuple/functions.hh>

/* NOTE: PPMPF_VCAT - A variadic version of PPMPF_CAT */
#define PPMPF_VCAT(x,...) \
        PPMPF_DREF(PPMPF_UTUP_FOLDL(PPMPF_CAT,(x),(__VA_ARGS__)))

/* NOTE: PPMPF_IARGS - Counting n arbirtrary size of arguments in __VA_ARGS__.
 * This will work within a range of 0 to 9999 macro arguments passed to
 * PPMPF_IARGS and that is the only limit. Returns positive ppmpf integer
 * representation (4 member sequence of digit tokens), PPMPF_IMINV() if
 * __VA_ARGS__ length is 0.
 */
#define PPMPF_IARGS(...) PPMPF_TUP_SIZEOF((__VA_ARGS__))

/* NOTE: PPMPF_NARGS - Counting an arbirtrary size of arguments in __VA_ARGS__.
 * This will work within a range of 0 to 9999 macro arguments passed to
 * PPMPF_NARGS and that is the only limit. Returns a human readable positive
 * integer, 0 if __VA_ARGS__ length is 0.
 */
#define PPMPF_NARGS(...) PPMPF_DIGNM(PPMPF_IARGS(__VA_ARGS__))

/*~
 * @desc Deduce whether a preprocessor token is parenthesis enclosed or not.
 * @pfrg x : a single preprocessor token
 * @pexp 1 if there is a parenthesis enclosure, 0 if there is not.
 */
#define PPMPF_ISPAREN(x) \
		PPMPF_IS(3,PPMPF_NARGS(PPMPF_JUST(PPMPF_COMMA x,PPMPF_COMMA)))

#endif /* CLAUSE_PPMPF_PPFK_HH */

/* --
 * Copyright (C) 2013, George Makrydakis <irrequietus@gmail.com>
 *
 * This file is part of odreex.
 *
 * odreex is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * odreex is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * odreex. If not, see http://www.gnu.org/licenses/.
 *
 */

#ifndef _ODREEX_PPMPF_PRSE_HH_
#define _ODREEX_PPMPF_PRSE_HH_

#include <odreex/ppmpf/ppfk.hh>

/*
 * Some ppmpf placeholders like _1,_2,__1,__2. The double underscore ones are
 * mark a placeholder for a value that is to be passed to PPMPF_DREF first.
 */
#define PPMPF_PLH_1() ,
#define PPMPF_PLH_2() ,
#define PPMPF_PLH__1() ,
#define PPMPF_PLH__2() ,

/* NOTE: PPMPF_PRSE_IZER: resolves to 1 if only empty token, 0 otherwise. */
#define PPMPF_PRSE_IZER(...) \
        PPMPF_IEQL(PPMPF_IARGS(__VA_ARGS__),PPMPF_IMINV())

/* NOTE: PPMPF_PRSE_IUNT: resolves to 1 if token is a unit, 0 otherwise. */
#define PPMPF_PRSE_IUNT(x) \
        PPMPF_AND( PPMPF_PRSE_IZER(PPMPF_DREF(x) ) \
                 , PPMPF_PRSE_IZER(PPMPF_JUST x) )

/* NOTE: PPMPF_PRSE_IPRN: a single (), regardless of empty tokens. */
#define PPMPF_PRSE_IPRN(x) \
        PPMPF_PRSE_IZER(PPMPF_EMPTY x)

/* NOTE: PPMPF_PRSE_IPRT: a single () with non empty token(s) inside. */
#define PPMPF_PRSE_IPRT(x) \
        PPMPF_AND( PPMPF_PRSE_IZER(PPMPF_EMPTY x) \
                 , PPMPF_NOT(PPMPF_PRSE_IZER(PPMPF_JUST x)) )

/* NOTE: PPMPF_PRSE_ITOK: is a non empty token with no ),( characters. */
#define PPMPF_PRSE_ITOK(x) \
        PPMPF_NOR( PPMPF_PRSE_IZER(x) \
                 , PPMPF_PRSE_IPRN(x) )

/* NOTE: PPMPF_PRSE_IPLH: Detect _1,_2,__1,__2 placeholders. */
#define PPMPF_PRSE_IPLH(x) \
        PPMPF_IFELSE( PPMPF_PRSE_ITOK(x) \
                    , PPMPF_EMPTY_7 \
                    , PPMPF_FALSE)(PPMPF_CAT(PPMPF_PLH,x)())

/* NOTE: PPMPF_PRSE_PLHF: a primitive placeholder binding function macro. */
#define PPMPF_PRSE_PLHF_1_2(f,a,b) f(PPMPF_DREF(a),PPMPF_DREF(b))
#define PPMPF_PRSE_PLHF__1_2(f,a,b) f(a,PPMPF_DREF(b))
#define PPMPF_PRSE_PLHF_1__2(f,a,b) f(PPMPF_DREF(a),b)
#define PPMPF_PRSE_PLHF__2__1(f,a,b) f(a,b)
#define PPMPF_PRSE_PLHF_2_1(f,a,b) f(PPMPF_DREF(a),PPMPF_DREF(b))
#define PPMPF_PRSE_PLHF__2_1(f,a,b) f(a,PPMPF_DREF(b))
#define PPMPF_PRSE_PLHF_2__1(f,a,b) f(PPMPF_DREF(a),b)
#define PPMPF_PRSE_PLHF__2__1(f,a,b) f(a,b)
#define PPMPF_PRSE_PLHF_1_1(f,a,b) f(PPMPF_DREF(a),PPMPF_DREF(b))
#define PPMPF_PRSE_PLHF__1_1(f,a,b) f(a,PPMPF_DREF(b))
#define PPMPF_PRSE_PLHF_1__1(f,a,b) f(PPMPF_DREF(a),b)
#define PPMPF_PRSE_PLHF__1__1(f,a,b) f(a,b)
#define PPMPF_PRSE_PLHF_2_2(f,a,b) f(PPMPF_DREF(a),PPMPF_DREF(b))
#define PPMPF_PRSE_PLHF__2_2(f,a,b) f(a,PPMPF_DREF(b))
#define PPMPF_PRSE_PLHF_2__2(f,a,b) f(PPMPF_DREF(a),b)
#define PPMPF_PRSE_PLHF__2__2(f,a,b) f(a,b)
#define PPMPF_PRSE_PLHF(f,p1,p2,a,b) PPMPF_PRSE_PLHF##p1##p2(f,a,b)

#endif /* _ODREEX_PPMPF_PRSE_HH_ */
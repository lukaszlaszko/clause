/*~
 * Copyright (C) 2013, 2014 George Makrydakis <george@irrequietus.eu>
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

#ifndef _CLAUSE_PPMPF_ALGORITHMS_ZIPAUX_HH_
#define _CLAUSE_PPMPF_ALGORITHMS_ZIPAUX_HH_

#ifndef _CLAUSE_PPMPF_ALGORITHMS_FOLD_HH_
#error ppmpf: <clause/ppmpf/algorithms/zip.hh> must precede.
#endif

#define PPMPF_ZIPT_GET(x)  PPMPF_FLDX14(PPMPF_FLDX0P,x)
#define PPMPF_ZIPT_3GET(x) PPMPF_FLDX15(PPMPF_FLDX0P,x)
#define PPMPF_ZIPT_4GET(x) PPMPF_FLDX16(PPMPF_FLDX0P,x)
#define PPMPF_ZIPT_5GET(x) PPMPF_FLDX17(PPMPF_FLDX0P,x)
#define PPMPF_ZIPT_6GET(x) PPMPF_FLDX18(PPMPF_FLDX0P,x)
#define PPMPF_ZIPT_7GET(x) PPMPF_FLDX19(PPMPF_FLDX0P,x)
#define PPMPF_ZIPT_8GET(x) PPMPF_FLDX1A(PPMPF_FLDX0P,x)
#define PPMPF_ZIPT_9GET(x) PPMPF_FLDX1B(PPMPF_FLDX0P,x)

#define PPMPF_ZIPS_GET(x)  PPMPF_FLDX14(PPMPF_FLDX11,x)
#define PPMPF_ZIPS_3GET(x) PPMPF_FLDX15(PPMPF_FLDX11,x)
#define PPMPF_ZIPS_4GET(x) PPMPF_FLDX16(PPMPF_FLDX11,x)
#define PPMPF_ZIPS_5GET(x) PPMPF_FLDX17(PPMPF_FLDX11,x)
#define PPMPF_ZIPS_6GET(x) PPMPF_FLDX18(PPMPF_FLDX11,x)
#define PPMPF_ZIPS_7GET(x) PPMPF_FLDX19(PPMPF_FLDX11,x)
#define PPMPF_ZIPS_8GET(x) PPMPF_FLDX1A(PPMPF_FLDX11,x)
#define PPMPF_ZIPS_9GET(x) PPMPF_FLDX1B(PPMPF_FLDX11,x)

#define PPMPF_ZIPT_POP(x)  PPMPF_FLDX14(PPMPF_FLDX0Q,x)
#define PPMPF_ZIPT_3POP(x) PPMPF_FLDX15(PPMPF_FLDX0Q,x)
#define PPMPF_ZIPT_4POP(x) PPMPF_FLDX16(PPMPF_FLDX0Q,x)
#define PPMPF_ZIPT_5POP(x) PPMPF_FLDX17(PPMPF_FLDX0Q,x)
#define PPMPF_ZIPT_6POP(x) PPMPF_FLDX18(PPMPF_FLDX0Q,x)
#define PPMPF_ZIPT_7POP(x) PPMPF_FLDX19(PPMPF_FLDX0Q,x)
#define PPMPF_ZIPT_8POP(x) PPMPF_FLDX1A(PPMPF_FLDX0Q,x)
#define PPMPF_ZIPT_9POP(x) PPMPF_FLDX1B(PPMPF_FLDX0Q,x)

#define PPMPF_ZIPS_POP(x)  PPMPF_FLDX14(PPMPF_FLDX12,x)
#define PPMPF_ZIPS_3POP(x) PPMPF_FLDX15(PPMPF_FLDX12,x)
#define PPMPF_ZIPS_4POP(x) PPMPF_FLDX16(PPMPF_FLDX12,x)
#define PPMPF_ZIPS_5POP(x) PPMPF_FLDX17(PPMPF_FLDX12,x)
#define PPMPF_ZIPS_6POP(x) PPMPF_FLDX18(PPMPF_FLDX12,x)
#define PPMPF_ZIPS_7POP(x) PPMPF_FLDX19(PPMPF_FLDX12,x)
#define PPMPF_ZIPS_8POP(x) PPMPF_FLDX1A(PPMPF_FLDX12,x)
#define PPMPF_ZIPS_9POP(x) PPMPF_FLDX1B(PPMPF_FLDX12,x)

#define PPMPF_ZIPT_EMPTY(x)  PPMPF_FLDX1C(PPMPF_OR,PPMPF_FLDX0R,x)
#define PPMPF_ZIPT_3EMPTY(x) PPMPF_FLDX1D(PPMPF_OR,PPMPF_FLDX0R,x)
#define PPMPF_ZIPT_4EMPTY(x) PPMPF_FLDX1E(PPMPF_OR,PPMPF_FLDX0R,x)
#define PPMPF_ZIPT_5EMPTY(x) PPMPF_FLDX1F(PPMPF_OR,PPMPF_FLDX0R,x)
#define PPMPF_ZIPT_6EMPTY(x) PPMPF_FLDX1G(PPMPF_OR,PPMPF_FLDX0R,x)
#define PPMPF_ZIPT_7EMPTY(x) PPMPF_FLDX1H(PPMPF_OR,PPMPF_FLDX0R,x)
#define PPMPF_ZIPT_8EMPTY(x) PPMPF_FLDX1I(PPMPF_OR,PPMPF_FLDX0R,x)
#define PPMPF_ZIPT_9EMPTY(x) PPMPF_FLDX1J(PPMPF_OR,PPMPF_FLDX0R,x)

#define PPMPF_ZIPS_EMPTY(x)  PPMPF_FLDX1C(PPMPF_OR,PPMPF_FLDX13,x)
#define PPMPF_ZIPS_3EMPTY(x) PPMPF_FLDX1D(PPMPF_OR,PPMPF_FLDX13,x)
#define PPMPF_ZIPS_4EMPTY(x) PPMPF_FLDX1E(PPMPF_OR,PPMPF_FLDX13,x)
#define PPMPF_ZIPS_5EMPTY(x) PPMPF_FLDX1F(PPMPF_OR,PPMPF_FLDX13,x)
#define PPMPF_ZIPS_6EMPTY(x) PPMPF_FLDX1G(PPMPF_OR,PPMPF_FLDX13,x)
#define PPMPF_ZIPS_7EMPTY(x) PPMPF_FLDX1H(PPMPF_OR,PPMPF_FLDX13,x)
#define PPMPF_ZIPS_8EMPTY(x) PPMPF_FLDX1I(PPMPF_OR,PPMPF_FLDX13,x)
#define PPMPF_ZIPS_9EMPTY(x) PPMPF_FLDX1J(PPMPF_OR,PPMPF_FLDX13,x)

#define PPMPF_ZIPT_APPLY(f,sl,g,...) \
        ((PPMPF_APPLY(f,PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl)))))))
#define PPMPF_ZIPS_APPLY(f,sl,g,...) \
        (PPMPF_APPLY(f,PPMPF_DREF(g(PPMPF_DREF(PPMPF_SEQ_POP(sl))))))
        
#endif /* _CLAUSE_PPMPF_ALGORITHMS_ZIPAUX_HH_ */
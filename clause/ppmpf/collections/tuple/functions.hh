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

#ifndef CLAUSE_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH
#define CLAUSE_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH

#include <clause/ppmpf/collections/tuple/essence.hh>
#include <clause/ppmpf/algorithms/fold.hh>
#include <clause/ppmpf/algorithms/zip.hh>
#include <clause/ppmpf/algorithms/functional.hh>
#include <clause/ppmpf/collections/tuple/atpos.hh>

/* NOTE: PPMPF_UTUP_GET - Get the first element of a tuple, enclosed in ()
 *       PPMPF_TUP_POP - Remove the first element, get the rest.
 * Should be clear now, a tuple is a () enclosed list of comma separated tokens,
 * while a sequence is a list of tuples separated by whitespace. A tuple with
 * no commas is referred to as "unit".
 * 
 * Safe tuples are made of a comma separated list of parenthesis - enclosed
 * preprocessor tokens. Unsafe / raw tuples are comma separated tokens without
 * any obbligatory enclosure for all their items. If the last item in an unsafe
 * tuple is either a special character (non alphanumeric) or is a preprocessor
 * macro identifier, it should be immediately followed by a comma when passed
 * to any one of the unsafe tuple functions (UTUP). The system takes care of
 * the rest.
 */
#define PPMPF_UTUP_GET____(x) x
#define PPMPF_UTUP_GET___(x,...) PPMPF_UTUP_GET____(x)
#define PPMPF_UTUP_GET__(...) PPMPF_UTUP_GET___(__VA_ARGS__,)
#define PPMPF_UTUP_GET_(...) PPMPF_UTUP_GET__(__VA_ARGS__,)
#define PPMPF_UTUP_GET(t) (PPMPF_UTUP_GET___(PPMPF_UTUP_GET_ t,))

/* NOTE: for "safe" tuples. */
#define PPMPF_TUP_GET(t) PPMPF_UTUP_GET___(PPMPF_UTUP_GET_ t,)

/* NOTE: PMPF_TUP_POP: will remove the first element of a tuple. */
#define PPMPF_TUP_POP___(x,...) (__VA_ARGS__)
#define PPMPF_TUP_POP__(...) PPMPF_TUP_POP___(__VA_ARGS__)
#define PPMPF_TUP_POP_(...) \
        PPMPF_IFELSE( PPMPF_JUST(PPMPF_EMPTY_C PPMPF_TUP_POP___(__VA_ARGS__,))\
                    , PPMPF_UNIT \
                    , PPMPF_TUP_POP__)(__VA_ARGS__)
#define PPMPF_TUP_POP(x) PPMPF_TUP_POP_ x

/* NOTE: PPMPF_TUP_EMPTY: Checking for empty ppmpf tuple. */
#define PPMPF_TUP_EMPTY(t) \
        PPMPF_EMPTY_A( PPMPF_TUP_POP(PPMPF_TUP_POP((PPMPF_DREF(t),~))) \
                     , PPMPF_JUST PPMPF_UTUP_GET((PPMPF_DREF(t),~)) )

/* NOTE: for "unsafe" tuples */
#define PPMPF_UTUP_EMPTY(t) \
        PPMPF_EMPTY_A2( PPMPF_TUP_POP(PPMPF_TUP_POP((PPMPF_DREF(t),~))) \
                      , PPMPF_JUST PPMPF_UTUP_GET((PPMPF_DREF(t),~)) )

/* NOTE: PPMPF_UTUP_FOLDL: high order function performing a left fold over an
 *       unsafe / raw ppmpf tuple.
 */
#define PPMPF_UTUP_FOLDL(f,s,t) \
        PPMPF_FLDX1V( f \
                    , (s)(t) \
                    , PPMPF_UTUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0I \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_UTUP_FOLDL_OF: high order function performing a left fold over an
 *       unsafe / raw ppmpf tuple, with no fold seed.
 */
#define PPMPF_UTUP_FOLDL_OF(f,t) \
        PPMPF_FLDX1V( f \
                    , (PPMPF_UTUP_GET(t))(PPMPF_TUP_POP(t)) \
                    , PPMPF_UTUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0I \
                    , PPMPF_FLDX0L \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_UTUP_FOLDR: high order function performing a right fold over an
 *       unsafe / raw ppmpf tuple.
 */
#define PPMPF_UTUP_FOLDR(f,s,t) \
        PPMPF_FLDX1V( f \
                    , (s)(PPMPF_TUP_REVERSE(t)) \
                    , PPMPF_UTUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0O \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_UTUP_FOLDR: high order function performing a right fold over an
 *       unsafe / raw ppmpf tuple, with no fold seed.
 */
#define PPMPF_UTUP_FOLDR_OF(f,t) \
        PPMPF_UTUP_FOLDR_(f,PPMPF_TUP_REVERSE(t))

/* NOTE: PPMPF_TUPLE: safe ppmpf tuple constructor */
#define PPMPF_TUPLE(...) \
        PPMPF_IFELSE( PPMPF_TUP_EMPTY((__VA_ARGS__)) \
                    , PPMPF_UNIT \
                    , PPMPF_UTUP_MAP )\
        (,(__VA_ARGS__))

/* NOTE: PPMPF_TUP_FOLDL: high order function performing a left fold over a
 *       ppmpf tuple. */
#define PPMPF_TUP_FOLDL(f,s,t) \
        PPMPF_FLDX1V( f \
                    , (s)(t) \
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0I \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_TUP_FOLDL: high order function performing a left fold over a
 *       ppmpf tuple. */
#define PPMPF_TUP_FOLDL_OF(f,t) \
        PPMPF_FLDX1V( f \
                    , (PPMPF_TUP_GET(t))(PPMPF_TUP_POP(t)) \
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0I \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)


/* NOTE: PPMPF_TUP_REVERSE: reverses a ppmpf tuple. */
#define PPMPF_TUP_REVERSE(tup) \
        PPMPF_IFELSE( PPMPF_OR( PPMPF_TUP_EMPTY(PPMPF_TUP_POP(tup)) \
                              , PPMPF_TUP_EMPTY(tup) ) \
                    , PPMPF_JUST \
                    , PPMPF_TUP_REVERSE_)(tup)

/* NOTE: PPMPF_TUP_FOLDR: high order function performing a right fold over a
 *       ppmpf tuple. */
#define PPMPF_TUP_FOLDR(f,s,t) \
        PPMPF_FLDX1V( f \
                    , (s)(PPMPF_TUP_REVERSE(t)) \
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0O \
                    , PPMPF_FLDX0L  \
                    , PPMPF_FLDX0K ,)

/* NOTE: PPMPF_TUP_FOLDR_OF: high order function performing a right fold over a
 *       ppmpf tuple. */
#define PPMPF_TUP_FOLDR_OF(f,t) \
        PPMPF_TUP_FOLDR_(f,PPMPF_TUP_REVERSE(t))

/* NOTE: PPMPF_TUP_SIZEOF(tup) returns the number of tuple members existing
 * in a given tuple (tup), which is a parenthesis enclosed comma separated
 * series of preprocessor tokens.
 */
#define PPMPF_TUP_SIZEOF(tup) \
        PPMPF_DREF(PPMPF_UTUP_FOLDL(PPMPF_PLUS__,(PPMPF_IMINV()),tup))

/* NOTE: PPMPF_UTUP2SEQ: convert an unsafe / raw ppmpf tuple to a ppmpf
 *       sequence, preserving the original order of elements. */
#define PPMPF_UTUP2SEQ(tup) \
        PPMPF_DREF( \
            PPMPF_UTUP_FOLDL( PPMPF_T2S_ \
                            , (PPMPF_UTUP_GET(tup)) \
                            , PPMPF_TUP_POP(tup) ) )

/* NOTE: PPMPF_TUP_JOIN: Join two safe ppmpf tuples together.*/
#define PPMPF_TUP_JOIN(z,x) \
    (PPMPF_DREF(z)PPMPF_IFELSE( PPMPF_NOR( PPMPF_TUP_EMPTY(z) \
                                         , PPMPF_TUP_EMPTY(x)) \
                              , PPMPF_COMMA \
                              , PPMPF_EMPTY)()PPMPF_DREF(x))

/* NOTE: PPMPF_UTUP_JOIN: Join two unsafe ppmpf tuples together.*/
#define PPMPF_UTUP_JOIN(z,x) \
        (PPMPF_DREF(z)PPMPF_IFELSE( PPMPF_NOR( PPMPF_UTUP_EMPTY(z) \
                                             , PPMPF_UTUP_EMPTY(x)) \
                                  , PPMPF_COMMA \
                                  , PPMPF_EMPTY)()PPMPF_DREF(x))

/* NOTE: PPMPF_TUP_SPLIT: Split a ppmpf tuple into pair of two tuples at a
 * given position n */
#define PPMPF_TUP_SPLIT(n,tup) \
        PPMPF_COMPOSE( ((), PPMPF_DREF(tup)) \
                     , (PPMPF_TUP_SPLIT_)    \
                       (PPMPF_CAT(PPMPF_TUP_A0,PPMPF_DIGIT(0,n))) \
                       (PPMPF_CAT(PPMPF_TUP_A1,PPMPF_PNX(PPMPF_DIGIT(1,n)))) \
                       (PPMPF_CAT(PPMPF_TUP_A2,PPMPF_PNX(PPMPF_DIGIT(2,n)))) \
                       (PPMPF_CAT(PPMPF_TUP_A3,PPMPF_PNX(PPMPF_DIGIT(3,n)))))

/* NOTE: PPMPF_TUP_SPLITL: Split a ppmpf tuple into pair of two tuples at a
 * given position n and return the first of the two (left) */
#define PPMPF_TUP_SPLITL(n,tup) \
        PPMPF_COMPOSE( PPMPF_TUP_SPLIT(PPMPF_PREV(n),tup) \
                     , (PPMPF_DPAR)    \
                       (PPMPF_DPAR)    \
                       (PPMPF_UTUP_GET) \
                       (PPMPF_ENCLOSE) )

/* NOTE: PPMPF_TUP_SPLITR: Split a ppmpf tuple into pair of two tuples at a
 * given position n and return the second of the two (right) */
#define PPMPF_TUP_SPLITR(n,tup) \
        PPMPF_COMPOSE( PPMPF_TUP_SPLIT(PPMPF_PREV(n),tup) \
                     , (PPMPF_DPAR)    \
                       (PPMPF_DPAR)    \
                       (PPMPF_TUP_POP) \
                       (PPMPF_ENCLOSE) )

/* NOTE: PPMPF_TUP_ATPOS: return ppmpf element at position n */
#define PPMPF_TUP_ATPOS(n,tup) \
        PPMPF_COMPOSE( PPMPF_TUP_SPLIT(PPMPF_PREV(n),(PPMPF_DREF(tup),/**/)) \
                     , (PPMPF_DPAR)    \
                       PPMPF_IFELSE( PPMPF_IEQL(n,PPMPF_IMINV()) \
                                   , (PPMPF_DPAR)                \
                                     (PPMPF_UTUP_GET)             \
                                   , (PPMPF_UTUP_GET)             \
                                     (PPMPF_DPAR)                \
                                     (PPMPF_TUP_POP) )           \
                       (PPMPF_ENCLOSE))

/* NOTE: PPMPF_TUP_MAP: An implementation of the map high order function for
 *       safe ppmpf tuple constructs.
 */
#define PPMPF_TUP_MAP(f,t) \
        PPMPF_FLDX0G( f \
                    , (((f(PPMPF_DREF(PPMPF_TUP_GET(t))))))(PPMPF_TUP_POP(t))\
                    , PPMPF_TUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_TUP_EMPTY \
                    , PPMPF_FLDX0E \
                    , PPMPF_FLDX0D \
                    , PPMPF_FLDX0H, )

/* NOTE: PPMPF_UTUP_MAP: An implementation of the map high order function for
 *       unsafe / raw ppmpf tuple constructs.
 */
#define PPMPF_UTUP_MAP(f,t) \
        PPMPF_FLDX0G( f \
                    , ((f(PPMPF_TUP_GET(t))))(PPMPF_TUP_POP(t)) \
                    , PPMPF_UTUP_GET \
                    , PPMPF_TUP_POP \
                    , PPMPF_UTUP_EMPTY \
                    , PPMPF_FLDX1T \
                    , PPMPF_FLDX0D \
                    , PPMPF_FLDX22, )

#endif /* CLAUSE_PPMPF_COLLECTIONS_TUPLE_FUNCTIONS_HH */

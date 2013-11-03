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

#include <odreex/ample/test.hh>
#include <odreex/ppmpf/ppfk.hh>
#include <odreex/ppmpf/test.hh>

PPMPF_TEST( ppmpf_tup_empty
          , "PPMPF_TUP_EMPTY with an empty tuple"
          , PPMPF_TUP_EMPTY(())
          , 1 )

PPMPF_TEST( ppmpf_tup_empty1
          , "PPMPF_TUP_EMPTY with a single argument"
          , PPMPF_TUP_EMPTY((a single argument))
          , 0 )

PPMPF_TEST( ppmpf_tup_empty2
          , "PPMPF_TUP_EMPTY with a single comma"
          , PPMPF_TUP_EMPTY((,))
          , 0 )

PPMPF_TEST( ppmpf_tup_empty3
          , "PPMPF_TUP_EMPTY with a macro as argument"
          , PPMPF_TUP_EMPTY((PPMPF_TEST))
          , 0 )

PPMPF_TEST( ppmpf_tup_empty4
          , "PPMPF_TUP_EMPTY with a balanced parenthesis"
          , PPMPF_TUP_EMPTY((()))
          , 0 )

PPMPF_TEST( ppmpf_tup_reverse
          , "PPMPF_TUP_REVERSE with 128 arguments"
          , PPMPF_TUP_REVERSE((0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
                              ,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f))
          , (f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,\
f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0,f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0))

PPMPF_TEST_BLOCK( ppmpf
                , check_tuple
                , ( ppmpf_tup_empty
                  , ppmpf_tup_empty1
                  , ppmpf_tup_empty2
                  , ppmpf_tup_empty3
                  , ppmpf_tup_empty4
                  , ppmpf_tup_reverse )
                , true )

int main() {
    PPMPF_TEST_RUN( check_tuple
                  , "testing ppmpf tuples" );
    return {};
}

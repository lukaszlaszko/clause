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

/*~
 * @warn This file should not be included directly in code deploying library
 *       constructs from 'clause'; it is part of a high level meta-macro
 *       construct where multiple #if directives control its actual inclusion.
 */

#undef  PPMPF_VXPP_S1F24
#undef  PPMPF_VXPP_S1F23
#undef  PPMPF_VXPP_S1F22
#undef  PPMPF_VXPP_S1F21
#undef  PPMPF_VXPP_S1F20

#if   (_PPMPF_FARG12() / 10000) % 10 == 0
    #define PPMPF_VXPP_S1F24 0
#elif (_PPMPF_FARG12() / 10000) % 10 == 1
    #define PPMPF_VXPP_S1F24 1
#elif (_PPMPF_FARG12() / 10000) % 10 == 2
    #define PPMPF_VXPP_S1F24 2
#elif (_PPMPF_FARG12() / 10000) % 10 == 3
    #define PPMPF_VXPP_S1F24 3
#elif (_PPMPF_FARG12() / 10000) % 10 == 4
    #define PPMPF_VXPP_S1F24 4
#elif (_PPMPF_FARG12() / 10000) % 10 == 5
    #define PPMPF_VXPP_S1F24 5
#elif (_PPMPF_FARG12() / 10000) % 10 == 6
    #define PPMPF_VXPP_S1F24 6
#elif (_PPMPF_FARG12() / 10000) % 10 == 7
    #define PPMPF_VXPP_S1F24 7
#elif (_PPMPF_FARG12() / 10000) % 10 == 8
    #define PPMPF_VXPP_S1F24 8
#elif (_PPMPF_FARG12() / 10000) % 10 == 9
    #define PPMPF_VXPP_S1F24 9
#endif

#if   (_PPMPF_FARG12() / 1000) % 10 == 0
    #define PPMPF_VXPP_S1F23 0
#elif (_PPMPF_FARG12() / 1000) % 10 == 1
    #define PPMPF_VXPP_S1F23 1
#elif (_PPMPF_FARG12() / 1000) % 10 == 2
    #define PPMPF_VXPP_S1F23 2
#elif (_PPMPF_FARG12() / 1000) % 10 == 3
    #define PPMPF_VXPP_S1F23 3
#elif (_PPMPF_FARG12() / 1000) % 10 == 4
    #define PPMPF_VXPP_S1F23 4
#elif (_PPMPF_FARG12() / 1000) % 10 == 5
    #define PPMPF_VXPP_S1F23 5
#elif (_PPMPF_FARG12() / 1000) % 10 == 6
    #define PPMPF_VXPP_S1F23 6
#elif (_PPMPF_FARG12() / 1000) % 10 == 7
    #define PPMPF_VXPP_S1F23 7
#elif (_PPMPF_FARG12() / 1000) % 10 == 8
    #define PPMPF_VXPP_S1F23 8
#elif (_PPMPF_FARG12() / 1000) % 10 == 9
    #define PPMPF_VXPP_S1F23 9
#endif

#if   (_PPMPF_FARG12() / 100) % 10 == 0
    #define PPMPF_VXPP_S1F22 0
#elif (_PPMPF_FARG12() / 100) % 10 == 1
    #define PPMPF_VXPP_S1F22 1
#elif (_PPMPF_FARG12() / 100) % 10 == 2
    #define PPMPF_VXPP_S1F22 2
#elif (_PPMPF_FARG12() / 100) % 10 == 3
    #define PPMPF_VXPP_S1F22 3
#elif (_PPMPF_FARG12() / 100) % 10 == 4
    #define PPMPF_VXPP_S1F22 4
#elif (_PPMPF_FARG12() / 100) % 10 == 5
    #define PPMPF_VXPP_S1F22 5
#elif (_PPMPF_FARG12() / 100) % 10 == 6
    #define PPMPF_VXPP_S1F22 6
#elif (_PPMPF_FARG12() / 100) % 10 == 7
    #define PPMPF_VXPP_S1F22 7
#elif (_PPMPF_FARG12() / 100) % 10 == 8
    #define PPMPF_VXPP_S1F22 8
#elif (_PPMPF_FARG12() / 100) % 10 == 9
    #define PPMPF_VXPP_S1F22 9
#endif

#if   (_PPMPF_FARG12() / 10) % 10 == 0
    #define PPMPF_VXPP_S1F21 0
#elif (_PPMPF_FARG12() / 10) % 10 == 1
    #define PPMPF_VXPP_S1F21 1
#elif (_PPMPF_FARG12() / 10) % 10 == 2
    #define PPMPF_VXPP_S1F21 2
#elif (_PPMPF_FARG12() / 10) % 10 == 3
    #define PPMPF_VXPP_S1F21 3
#elif (_PPMPF_FARG12() / 10) % 10 == 4
    #define PPMPF_VXPP_S1F21 4
#elif (_PPMPF_FARG12() / 10) % 10 == 5
    #define PPMPF_VXPP_S1F21 5
#elif (_PPMPF_FARG12() / 10) % 10 == 6
    #define PPMPF_VXPP_S1F21 6
#elif (_PPMPF_FARG12() / 10) % 10 == 7
    #define PPMPF_VXPP_S1F21 7
#elif (_PPMPF_FARG12() / 10) % 10 == 8
    #define PPMPF_VXPP_S1F21 8
#elif (_PPMPF_FARG12() / 10) % 10 == 9
    #define PPMPF_VXPP_S1F21 9
#endif

#if   _PPMPF_FARG12() % 10 == 0
    #define PPMPF_VXPP_S1F20 0
#elif _PPMPF_FARG12() % 10 == 1
    #define PPMPF_VXPP_S1F20 1
#elif _PPMPF_FARG12() % 10 == 2
    #define PPMPF_VXPP_S1F20 2
#elif _PPMPF_FARG12() % 10 == 3
    #define PPMPF_VXPP_S1F20 3
#elif _PPMPF_FARG12() % 10 == 4
    #define PPMPF_VXPP_S1F20 4
#elif _PPMPF_FARG12() % 10 == 5
    #define PPMPF_VXPP_S1F20 5
#elif _PPMPF_FARG12() % 10 == 6
    #define PPMPF_VXPP_S1F20 6
#elif _PPMPF_FARG12() % 10 == 7
    #define PPMPF_VXPP_S1F20 7
#elif _PPMPF_FARG12() % 10 == 8
    #define PPMPF_VXPP_S1F20 8
#elif _PPMPF_FARG12() % 10 == 9
    #define PPMPF_VXPP_S1F20 9
#endif

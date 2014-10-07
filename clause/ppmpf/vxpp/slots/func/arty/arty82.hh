/*~
 * Copyright (C) 2013, 2014 George Makrydakis <irrequietus@gmail.com>
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

#undef  PPMPF_VXPP_S8F14
#undef  PPMPF_VXPP_S8F13
#undef  PPMPF_VXPP_S8F12
#undef  PPMPF_VXPP_S8F11
#undef  PPMPF_VXPP_S8F10

#if   (_PPMPF_FARG81() / 10000) % 10 == 0
    #define PPMPF_VXPP_S8F14 0
#elif (_PPMPF_FARG81() / 10000) % 10 == 1
    #define PPMPF_VXPP_S8F14 1
#elif (_PPMPF_FARG81() / 10000) % 10 == 2
    #define PPMPF_VXPP_S8F14 2
#elif (_PPMPF_FARG81() / 10000) % 10 == 3
    #define PPMPF_VXPP_S8F14 3
#elif (_PPMPF_FARG81() / 10000) % 10 == 4
    #define PPMPF_VXPP_S8F14 4
#elif (_PPMPF_FARG81() / 10000) % 10 == 5
    #define PPMPF_VXPP_S8F14 5
#elif (_PPMPF_FARG81() / 10000) % 10 == 6
    #define PPMPF_VXPP_S8F14 6
#elif (_PPMPF_FARG81() / 10000) % 10 == 7
    #define PPMPF_VXPP_S8F14 7
#elif (_PPMPF_FARG81() / 10000) % 10 == 8
    #define PPMPF_VXPP_S8F14 8
#elif (_PPMPF_FARG81() / 10000) % 10 == 9
    #define PPMPF_VXPP_S8F14 9
#endif

#if   (_PPMPF_FARG81() / 1000) % 10 == 0
    #define PPMPF_VXPP_S8F13 0
#elif (_PPMPF_FARG81() / 1000) % 10 == 1
    #define PPMPF_VXPP_S8F13 1
#elif (_PPMPF_FARG81() / 1000) % 10 == 2
    #define PPMPF_VXPP_S8F13 2
#elif (_PPMPF_FARG81() / 1000) % 10 == 3
    #define PPMPF_VXPP_S8F13 3
#elif (_PPMPF_FARG81() / 1000) % 10 == 4
    #define PPMPF_VXPP_S8F13 4
#elif (_PPMPF_FARG81() / 1000) % 10 == 5
    #define PPMPF_VXPP_S8F13 5
#elif (_PPMPF_FARG81() / 1000) % 10 == 6
    #define PPMPF_VXPP_S8F13 6
#elif (_PPMPF_FARG81() / 1000) % 10 == 7
    #define PPMPF_VXPP_S8F13 7
#elif (_PPMPF_FARG81() / 1000) % 10 == 8
    #define PPMPF_VXPP_S8F13 8
#elif (_PPMPF_FARG81() / 1000) % 10 == 9
    #define PPMPF_VXPP_S8F13 9
#endif

#if   (_PPMPF_FARG81() / 100) % 10 == 0
    #define PPMPF_VXPP_S8F12 0
#elif (_PPMPF_FARG81() / 100) % 10 == 1
    #define PPMPF_VXPP_S8F12 1
#elif (_PPMPF_FARG81() / 100) % 10 == 2
    #define PPMPF_VXPP_S8F12 2
#elif (_PPMPF_FARG81() / 100) % 10 == 3
    #define PPMPF_VXPP_S8F12 3
#elif (_PPMPF_FARG81() / 100) % 10 == 4
    #define PPMPF_VXPP_S8F12 4
#elif (_PPMPF_FARG81() / 100) % 10 == 5
    #define PPMPF_VXPP_S8F12 5
#elif (_PPMPF_FARG81() / 100) % 10 == 6
    #define PPMPF_VXPP_S8F12 6
#elif (_PPMPF_FARG81() / 100) % 10 == 7
    #define PPMPF_VXPP_S8F12 7
#elif (_PPMPF_FARG81() / 100) % 10 == 8
    #define PPMPF_VXPP_S8F12 8
#elif (_PPMPF_FARG81() / 100) % 10 == 9
    #define PPMPF_VXPP_S8F12 9
#endif

#if   (_PPMPF_FARG81() / 10) % 10 == 0
    #define PPMPF_VXPP_S8F11 0
#elif (_PPMPF_FARG81() / 10) % 10 == 1
    #define PPMPF_VXPP_S8F11 1
#elif (_PPMPF_FARG81() / 10) % 10 == 2
    #define PPMPF_VXPP_S8F11 2
#elif (_PPMPF_FARG81() / 10) % 10 == 3
    #define PPMPF_VXPP_S8F11 3
#elif (_PPMPF_FARG81() / 10) % 10 == 4
    #define PPMPF_VXPP_S8F11 4
#elif (_PPMPF_FARG81() / 10) % 10 == 5
    #define PPMPF_VXPP_S8F11 5
#elif (_PPMPF_FARG81() / 10) % 10 == 6
    #define PPMPF_VXPP_S8F11 6
#elif (_PPMPF_FARG81() / 10) % 10 == 7
    #define PPMPF_VXPP_S8F11 7
#elif (_PPMPF_FARG81() / 10) % 10 == 8
    #define PPMPF_VXPP_S8F11 8
#elif (_PPMPF_FARG81() / 10) % 10 == 9
    #define PPMPF_VXPP_S8F11 9
#endif

#if   _PPMPF_FARG81() % 10 == 0
    #define PPMPF_VXPP_S8F10 0
#elif _PPMPF_FARG81() % 10 == 1
    #define PPMPF_VXPP_S8F10 1
#elif _PPMPF_FARG81() % 10 == 2
    #define PPMPF_VXPP_S8F10 2
#elif _PPMPF_FARG81() % 10 == 3
    #define PPMPF_VXPP_S8F10 3
#elif _PPMPF_FARG81() % 10 == 4
    #define PPMPF_VXPP_S8F10 4
#elif _PPMPF_FARG81() % 10 == 5
    #define PPMPF_VXPP_S8F10 5
#elif _PPMPF_FARG81() % 10 == 6
    #define PPMPF_VXPP_S8F10 6
#elif _PPMPF_FARG81() % 10 == 7
    #define PPMPF_VXPP_S8F10 7
#elif _PPMPF_FARG81() % 10 == 8
    #define PPMPF_VXPP_S8F10 8
#elif _PPMPF_FARG81() % 10 == 9
    #define PPMPF_VXPP_S8F10 9
#endif

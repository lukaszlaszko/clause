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

#ifndef CLAUSE_PPMPF_KERNEL_PFLD0_HH
#define CLAUSE_PPMPF_KERNEL_PFLD0_HH

#include <clause/ppmpf/kernel/pfld/util.hh>

#define PPMPF_R0A0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0AZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0A1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0A0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0A2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0A1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0A3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0A2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0A4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0A3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0A5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0A4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0A6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0A5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0A7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0A6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0A8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0A7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0A9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0A8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0AA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0A9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0AB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0AA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0AC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0AB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0AD(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0AC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0AE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0AD)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0AF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0AE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#define PPMPF_R1A0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1AZ)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1A1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1A0)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1A2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1A1)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1A3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1A2)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1A4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1A3)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1A5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1A4)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1A6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1A5)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1A7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1A6)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1A8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1A7)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1A9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1A8)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1AA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1A9)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1AB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1AA)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1AC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1AB)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1AD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1AC)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1AE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1AD)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1AF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1AE)(f,PPMPF_R0AF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)

#define PPMPF_R2A0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2AZ)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2A1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2A0)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2A2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2A1)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2A3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2A2)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2A4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2A3)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2A5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2A4)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2A6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2A5)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2A7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2A6)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2A8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2A7)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2A9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2A8)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2AA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2A9)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2AB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2AA)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2AC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2AB)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2AD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2AC)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2AE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2AD)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2AF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2AE)(f,PPMPF_R1AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R3A0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3AZ)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3A1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3A0)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3A2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3A1)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3A3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3A2)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3A4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3A3)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3A5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3A4)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3A6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3A5)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3A7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3A6)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3A8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3A7)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3A9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3A8)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3AA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3A9)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3AB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3AA)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3AC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3AB)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3AD(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3AC)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3AE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3AD)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3AF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3AE)(f,PPMPF_R2AF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#endif /* CLAUSE_PPMPF_KERNEL_PFLD0_HH */

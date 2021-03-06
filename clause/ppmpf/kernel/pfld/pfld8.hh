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

#ifndef CLAUSE_PPMPF_KERNEL_PFLD8_HH
#define CLAUSE_PPMPF_KERNEL_PFLD8_HH

#include <clause/ppmpf/kernel/pfld/util.hh>

#define PPMPF_R0I0(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0IZ)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0I1(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0I0)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0I2(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0I1)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0I3(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0I2)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0I4(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0I3)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0I5(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0I4)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0I6(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0I5)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0I7(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0I6)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0I8(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0I7)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0I9(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0I8)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0IA(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0I9)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0IB(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0IA)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0IC(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0IB)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0ID(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0IC)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0IE(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0ID)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)
#define PPMPF_R0IF(f,sl,g,p,h,i,m,j,...) \
        m(h,sl,R0IE)(f,j(f,sl,g,p,h,i,__VA_ARGS__),g,p,h,i,m,j,__VA_ARGS__)

#define PPMPF_R1I0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1IZ)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1I1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1I0)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1I2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1I1)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1I3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1I2)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1I4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1I3)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1I5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1I4)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1I6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1I5)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1I7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1I6)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1I8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1I7)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1I9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1I8)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1IA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1I9)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1IB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1IA)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1IC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1IB)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1ID(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1IC)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1IE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1ID)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)
#define PPMPF_R1IF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R1IE)(f,PPMPF_R0IF(f,sl,g,p,h,i,m,j,PPMPF_XPR(v)),g,p,h,i,m,j,v)

#define PPMPF_R2I0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2IZ)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2I1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2I0)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2I2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2I1)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2I3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2I2)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2I4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2I3)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2I5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2I4)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2I6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2I5)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2I7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2I6)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2I8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2I7)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2I9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2I8)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2IA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2I9)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2IB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2IA)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2IC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2IB)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2ID(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2IC)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2IE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2ID)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R2IF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R2IE)(f,PPMPF_R1IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#define PPMPF_R3I0(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3IZ)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3I1(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3I0)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3I2(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3I1)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3I3(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3I2)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3I4(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3I3)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3I5(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3I4)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3I6(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3I5)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3I7(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3I6)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3I8(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3I7)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3I9(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3I8)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3IA(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3I9)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3IB(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3IA)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3IC(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3IB)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3ID(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3IC)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3IE(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3ID)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)
#define PPMPF_R3IF(f,sl,g,p,h,i,m,j,v) \
        m(h,sl,R3IE)(f,PPMPF_R2IF(f,sl,g,p,h,i,m,j,v),g,p,h,i,m,j,v)

#endif /* CLAUSE_PPMPF_RKERNEL_PFLD1_HH */

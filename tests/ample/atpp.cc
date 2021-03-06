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

#include <clause/ample/test.hh>
#include <clause/ample/base/atpp.hh>
#include <clause/ppmpf/spexp.hh>

#define PPMPF_VXPP_SET0(a_) \
        ()(struct a_{};)(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z)
#include PPMPF_VXPP_FMAPOF(0)

struct pred {
    template<typename T, typename...>
    struct oprt_apply {
        using type = clause::ample::boolean<true>;
    };

    template<typename... Z>
    struct oprt_apply<char, Z...> {
        using type = clause::ample::boolean<false>;
    };
};

struct plus_ {
    template<typename A, typename B>
    struct oprt_apply
         : clause::ample::is_just<clause::ample::natural<A::value + B::value>>
    {};
};

struct charfy {
    template<typename X>
    struct oprt_apply
         : clause::ample::is_just<char[X::value]>
    {};
};

template<typename...>
struct Fx {
    template<typename A, typename B>
    struct oprt_apply { using type = Fx<A,B>; };
};

using test_
    = clause::ample::atpp< int, char, long>;

template<typename...> struct tested {};

CLAUSE_TEST_DEFN( check_all_atpp
                , "evaluating atpp pack annotation") {

    /*
     * An example of deploying a ppmpf based token generator using pure
     * preprocessor to implement the necessary boilerplate for the tests.
     * It is based on the macros defined in <clause/ppmpf/spexp.hh> and
     * CLAUSE_TEST_INDX itself is defined in <clause/ample/test.hh>.
     */
    CLAUSE_TEST_INDX(atpp, (0)(0)(4)(0));

    CLAUSE_TEST_TYPE( atpp0
                    , "atpp<X...>::type"
                    , true
                    , clause::ample::atpp<a,b,c>
                    , typename clause::ample::atpp<a,b,c>::type );

    CLAUSE_TEST_TYPE( atpp1
                    , "atpp<X...>::repeat<N>"
                    , true
                    , test_::repeat<3>
                    , clause::ample::atpp< int,char,long
                                         , int,char,long
                                         , int,char,long >);
    CLAUSE_TEST_TYPE( atpp2
                    , "atpp<X...>::pattern_of<N>"
                    , true
                    , test_::repeat<3>::pattern_of<3>
                    , clause::ample::boolean<true>);

    CLAUSE_TEST_TYPE( atpp3
                    , "atpp<X...>::expand<N,M>"
                    , true
                    , test_::repeat<3>::expand<1,4>
                    , clause::ample::atpp<char,long,int>);

    CLAUSE_TEST_TYPE( atpp4
                    , "atpp<X...>::generate<N,M,K>"
                    , true
                    , test_::repeat<3>::generate<1,4,10>
                    , clause::ample::atpp<char,long,int>::repeat<10>);

    CLAUSE_TEST_TYPE( atpp5
                    , "atpp<X...>::pattern_is<Y...>"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::pattern_is<char,long,int>
                    , clause::ample::boolean<true>);

    CLAUSE_TEST_TYPE( atpp6
                    , "atpp<X...>::atpos_is<N,T>"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::atpos_is<3,char>
                    , clause::ample::boolean<true>);

    CLAUSE_TEST_TYPE( atpp7
                    , "atpp<X...>::atpos<N>"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::atpos<0>
                    , char );

    CLAUSE_TEST_TYPE( atpp8
                    , "atpp<X...>::insert<N,T>"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::insert<11,double>
                                        ::atpos<11>
                    , double );

    CLAUSE_TEST_TYPE( atpp9
                    , "atpp<X...>::insert<N,T...>"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::insert<11,double,float,short>
                                        ::expand<11,14>
                    , clause::ample::atpp<double,float,short> );

    CLAUSE_TEST_TYPE( atpp10
                    , "atpp<X...>::replace<N,T...> (1)"
                    , true
                    , test_::repeat<3>
                                ::generate<1,4,10>
                                    ::replace<11,double,float,short>
                                        ::expand<11,14>
                    , clause::ample::atpp<double,float,short> );

    CLAUSE_TEST_TYPE( atpp11
                    , "atpp<X...>::replace<N,T...> (2)"
                    , true
                    , test_::repeat<3>::replace<5,double,float,short>
                    , clause::ample::atpp< int,char,long
                                         , int,char,double
                                         , float,short,long > );
    CLAUSE_TEST_TYPE( atpp12
                    , "atpp<X...>::remove<N>"
                    , true
                    , test_::remove<1>
                    , clause::ample::atpp<int,long> );

    CLAUSE_TEST_TYPE( atpp13
                    , "atpp<X...>::remove<N,M>"
                    , true
                    , test_::repeat<10>::remove<4,29>
                    , clause::ample::atpp<int,char,long,int,long> );

    CLAUSE_TEST_TYPE( atpp14
                    , "atpp<X...>::contains<T> (1)"
                    , true
                    , clause::ample::atpp<int>::repeat<100>::contains<double>
                    , clause::ample::natural<0> );

    CLAUSE_TEST_TYPE( atpp15
                    , "atpp<X...>::contains<T> (2)"
                    , true
                    , clause::ample::atpp<int>::repeat<100>::contains<int>
                    , clause::ample::natural<100> );

    CLAUSE_TEST_TYPE( atpp16
                    , "atpp<X...>::indices_of<T> (1)"
                    , true
                    , clause::ample::atpp<int>
                            ::repeat<100>
                                ::replace<30,double,double,double>
                                    ::indices_of<double>
                    , clause::ample::size_seq<30,31,32> );

    CLAUSE_TEST_TYPE( atpp17
                    , "atpp<X...>::indices_of<T> (2)"
                    , true
                    , clause::ample::atpp<int>
                            ::repeat<100>
                                ::replace<50,double,float,long,short>
                                    ::indices_of<long>
                    , clause::ample::size_seq<52> );

    CLAUSE_TEST_TYPE( atpp18
                    , "atpp<X...>::indices_of<T> (3)"
                    , true
                    , clause::ample::atpp<int>
                            ::repeat<100>
                                ::replace<50,double,float,long>
                                    ::indices_of<short>
                    , clause::ample::size_seq<> );

    CLAUSE_TEST_TYPE( atpp19
                    , "atpp<X...>::uniques (1)"
                    , true
                    , clause::ample::atpp< a,b,c,d,e,f,g,h,i,j,k,l,m
                                         , n,o,p,q,r,s,t,u,v,w,x,y,z >
                                        ::uniques
                    , clause::ample::atpp< a,b,c,d,e,f,g,h,i,j,k,l,m
                                         , n,o,p,q,r,s,t,u,v,w,x,y,z >  );

    CLAUSE_TEST_TYPE( atpp20
                    , "atpp<X...>::uniques (2)"
                    , true
                    , clause::ample::atpp< a,a,a,a,a,a,a,a >
                                        ::uniques
                    , clause::ample::atpp< a > );

    CLAUSE_TEST_TYPE( atpp21
                    , "atpp<X...>::uniques (3)"
                    , true
                    , clause::ample::atpp< a,a,b,a,a,c,c,d,e,f
                                         , a,d,e,a,d,b,e,e,f >
                                        ::uniques
                    , clause::ample::atpp< a,b,c,d,e,f > );

    CLAUSE_TEST_TYPE( atpp22
                    , "atpp<X...>::uniques_as<W>"
                    , true
                    , clause::ample::atpp< a,a,b,a,a,c,c,d,e,f
                                         , a,d,e,a,d,b,e,e,f >
                                        ::uniques_as<tested>
                    , tested< a,b,c,d,e,f > );

    CLAUSE_TEST_TYPE( atpp23
                    , "atpp<X...>::filter<F> (1)"
                    , true
                    , clause::ample::atpp<int,char,char,int,char,int>
                            ::filter<pred>
                    , clause::ample::atpp<int,int,int> );

    CLAUSE_TEST_TYPE( atpp24
                    , "atpp<X...>::filter<F> (2)"
                    , true
                    , clause::ample::atpp<>
                            ::filter<pred>
                    , clause::ample::atpp<> );

    CLAUSE_TEST_TYPE( atpp25
                    , "atpp<X...>::foldl<F,S> (1)"
                    , true
                    , clause::ample::atpp< clause::ample::natural<0>
                                         , clause::ample::natural<1>
                                         , clause::ample::natural<2>
                                         , clause::ample::natural<3>
                                         , clause::ample::natural<4>
                                         , clause::ample::natural<5> >
                            ::foldl<plus_, clause::ample::natural<0>>
                    , clause::ample::natural<15>  );

    CLAUSE_TEST_TYPE( atpp26
                    , "atpp<X...>::foldl_of<F> (2)"
                    , true
                    , clause::ample::atpp< clause::ample::natural<0>
                                         , clause::ample::natural<1>
                                         , clause::ample::natural<2>
                                         , clause::ample::natural<3>
                                         , clause::ample::natural<4>
                                         , clause::ample::natural<5> >
                            ::foldl_of<plus_>
                    , clause::ample::natural<15>  );

    CLAUSE_TEST_TYPE( atpp27
                    , "atpp<X...>::foldl<F,S> (3)"
                    , true
                    ,     clause::ample::atpp< a,b,c,d,e,f,g,h,i,j,k,l,m,n,o
                                             , p,q,r,s,t,u,v,w,x,y,z >
                                            ::foldl_of<Fx<>>
                    , Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx
                            <Fx<Fx<Fx<Fx<Fx<Fx<a, b>, c>, d>, e>, f>, g>, h>
                                , i>, j>, k>, l>, m>, n>, o>, p>, q>, r>, s>
                                , t>, u>, v>, w>, x>, y>, z>  );

    CLAUSE_TEST_TYPE( atpp28
                    , "atpp<X...>::foldl_of<F> (4)"
                    , true
                    ,     clause::ample::atpp< a,b,c,d,e,f,g,h,i,j,k,l,m,n,o
                                             , p,q,r,s,t,u,v,w,x,y,z >
                                            ::foldl_of<Fx<>>
                    , Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx<Fx
                            <Fx<Fx<Fx<Fx<Fx<Fx<a, b>, c>, d>, e>, f>, g>, h>
                                , i>, j>, k>, l>, m>, n>, o>, p>, q>, r>, s>
                                , t>, u>, v>, w>, x>, y>, z>  );

    CLAUSE_TEST_TYPE( atpp29
                    , "atpp<X...>::foldr<F,S> (1)"
                    , true
                    , clause::ample::atpp< clause::ample::natural<0>
                                         , clause::ample::natural<1>
                                         , clause::ample::natural<2>
                                         , clause::ample::natural<3>
                                         , clause::ample::natural<4>
                                         , clause::ample::natural<5> >
                            ::foldr<plus_, clause::ample::natural<0> >
                    , clause::ample::natural<15>  );

    CLAUSE_TEST_TYPE( atpp30
                    , "atpp<X...>::foldr<F,S> (2)"
                    , true
                    , clause::ample::atpp< a,b,c,d,e,f,g,h,i,j,k,l,m,n,o
                                         , p,q,r,s,t,u,v,w,x,y >
                            ::foldr<Fx<>, z>
                    , Fx<a, Fx<b, Fx<c, Fx<d, Fx<e, Fx<f, Fx<g, Fx<h, Fx<i
                        , Fx<j, Fx<k, Fx<l, Fx<m, Fx<n, Fx<o, Fx<p, Fx<q
                            , Fx<r, Fx<s, Fx<t, Fx<u, Fx<v, Fx<w
                                , Fx<x, Fx<y, z> >>>>>>>>>>>>>>>>>>>>>>>> );

    CLAUSE_TEST_TYPE( atpp31
                    , "atpp<X...>::foldr_of<F> (3)"
                    , true
                    , clause::ample::atpp< clause::ample::natural<0>
                                         , clause::ample::natural<1>
                                         , clause::ample::natural<2>
                                         , clause::ample::natural<3>
                                         , clause::ample::natural<4>
                                         , clause::ample::natural<5> >
                            ::foldr_of<plus_>
                    , clause::ample::natural<15>  );

    CLAUSE_TEST_TYPE( atpp32
                    , "atpp<X...>::foldr_of<F> (4)"
                    , true
                    , clause::ample::atpp< a,b,c,d,e,f,g,h,i,j,k,l,m,n,o
                                         , p,q,r,s,t,u,v,w,x,y,z >
                            ::foldr_of<Fx<>>
                    , Fx<a, Fx<b, Fx<c, Fx<d, Fx<e, Fx<f, Fx<g, Fx<h, Fx<i
                        , Fx<j, Fx<k, Fx<l, Fx<m, Fx<n, Fx<o, Fx<p, Fx<q
                            , Fx<r, Fx<s, Fx<t, Fx<u, Fx<v, Fx<w
                                , Fx<x, Fx<y, z> >>>>>>>>>>>>>>>>>>>>>>>> );

    CLAUSE_TEST_TYPE( atpp33
                    , "atpp<X...>::fmap<F>"
                    , true
                    , clause::ample::atpp< clause::ample::natural<1>
                                         , clause::ample::natural<2>
                                         , clause::ample::natural<3>
                                         , clause::ample::natural<4>
                                         , clause::ample::natural<5> >
                            ::fmap<charfy>
                    , clause::ample::atpp< char[1]
                                         , char[2]
                                         , char[3]
                                         , char[4]
                                         , char[5] > );

    CLAUSE_TEST_TYPE( atpp34
                    , "atpp<X...>::reverse"
                    , true
                    , clause::ample::atpp<a,b,c,d,e,f,g>::reverse
                    , clause::ample::atpp<g,f,e,d,c,b,a> );

    CLAUSE_TEST_TYPE( atpp35
                    , "atpp<X...>::split_left<N>"
                    , true
                    , clause::ample::atpp<a,b,c,d,e,f,g>::split_left<4>
                    , clause::ample::atpp<a,b,c,d> );

    CLAUSE_TEST_TYPE( atpp36
                    , "atpp<X...>::split_rght<N>"
                    , true
                    , clause::ample::atpp<a,b,c,d,e,f,g>::split_rght<4>
                    , clause::ample::atpp<e,f,g> );

    CLAUSE_TEST_TYPE( atpp37
                    , "atpp<X...>::push_back<Y...>"
                    , true
                    , clause::ample::atpp<a,b,c,d,e,f,g>::push_back<h,i,j,k>
                    , clause::ample::atpp<a,b,c,d,e,f,g,h,i,j,k> );

    CLAUSE_TEST_TYPE( atpp38
                    , "atpp<X...>::push_frnt<Y...>"
                    , true
                    , clause::ample::atpp<a,b,c,d,e,f,g>::push_frnt<h,i,j,k>
                    , clause::ample::atpp<h,i,j,k,a,b,c,d,e,f,g> );

    CLAUSE_TEST_TYPE( atpp39
                    , "atpp<X...>::pop_frnt<N>"
                    , true
                    , clause::ample::atpp<a,b,c,d,e,f,g,h,i,j,k>::pop_frnt<5>
                    , clause::ample::atpp<f,g,h,i,j,k> );

    CLAUSE_TEST_TYPE( atpp40
                    , "atpp<X...>::pop_back<N>"
                    , true
                    , clause::ample::atpp<a,b,c,d,e,f,g,h,i,j,k>::pop_back<5>
                    , clause::ample::atpp<a,b,c,d,e,f> );


};

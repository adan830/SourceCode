.. Data Types/Miscellaneous//pair |10

pair
====

Synopsis
--------

.. parsed-literal::
    
    template<
          typename T1
        , typename T2
        >
    struct pair
    {
        typedef pair type;
        typedef T1 first;
        typedef T2 second;
    };


Description
-----------

A transparent holder for two arbitrary types.


Header
------

.. parsed-literal::
    
    #include <boost/mpl/pair.hpp>


Example
-------

Count a number of elements in the sequence together with a number of negative
elements among these.

.. parsed-literal::
    
    typedef fold<
          vector_c<int,-1,0,5,-7,-2,4,5,7>
        , pair< int_<0>, int_<0> >
        , pair< 
              next< first<_1> >
            , if_< 
                  less< _2, int_<0> >
                , next< second<_1> >
                , second<_1> 
                >
            >
        >::type p;

    BOOST_MPL_ASSERT_RELATION( p::first::value, ==, 8 );
    BOOST_MPL_ASSERT_RELATION( p::second::value, ==, 3 );


See also
--------

|Data Types|, |Sequences|, |first|, |second|


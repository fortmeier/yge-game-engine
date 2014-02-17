ADD_SUBDIRECTORY( gtest-1.7.0 )

INCLUDE_DIRECTORIES( ${gtest_SOURCE_DIR}/include )
ADD_EXECUTABLE( runTests test.cpp )
TARGET_LINK_LIBRARIES( runTests gtest gtest_main )  

ADD_TEST( gtests runTests )

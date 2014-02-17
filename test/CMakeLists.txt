ADD_SUBDIRECTORY( gtest-1.7.0 )

INCLUDE_DIRECTORIES( ${gtest_SOURCE_DIR}/include )
INCLUDE_DIRECTORIES( ../src )



SET( test_src
  test.cpp
  heightmap.cpp
)


ADD_EXECUTABLE( runTests ${test_src} )
TARGET_LINK_LIBRARIES( runTests gtest gtest_main yge ${YGE_REQUIRED_LIBS} )  

ADD_TEST( gtests runTests )

ADD_CUSTOM_COMMAND(TARGET runTests PRE_BUILD
  COMMAND 
  ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/test/media
    $<TARGET_FILE_DIR:runTests>/media )

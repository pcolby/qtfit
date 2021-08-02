find_package(Qt${QT_VERSION_MAJOR}Test REQUIRED)
add_executable(testFitStreamReader testfitstreamreader.h testfitstreamreader.cpp)
add_test(NAME testFitStreamReader COMMAND testFitStreamReader)

target_include_directories(
  testFitStreamReader
  PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(
  testFitStreamReader
  PRIVATE QtFit
  PRIVATE Qt${QT_VERSION_MAJOR}::Test
)

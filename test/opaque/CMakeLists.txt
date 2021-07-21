find_package(Qt${QT_VERSION_MAJOR}Test REQUIRED)
add_executable(testSdkExamples testsdkexamples.h testsdkexamples.cpp)
add_test(NAME testSdkExamples COMMAND testSdkExamples)

target_include_directories(
  testSdkExamples
  PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(
  testSdkExamples
  PRIVATE QtFit
  PRIVATE Qt${QT_VERSION_MAJOR}::Test
)

# @todo This should not be necessary, since its supposed to be No
# by default. Yet, for some reason CMake is setting it to Yes.
set(CMAKE_SKIP_RPATH No)

# Add the main GAMBIT executable
if(EXISTS "${PROJECT_SOURCE_DIR}/Core/")
  add_gambit_executable(gambit SOURCES ${PROJECT_SOURCE_DIR}/Core/src/gambit.cpp ${GAMBIT_COMMON_OBJECTS} ${GAMBIT_OBJECTS} ${GAMBIT_BIT_OBJECTS})
  add_dependencies(gambit yaml sample scantest)
  message("checking FS flags: ${flexiblesusy_LDFLAGS}")
  target_link_libraries(gambit ${yaml_LDFLAGS} ${flexiblesusy_LDFLAGS} ${BOOST_LDFLAGS})
  add_dependencies(gambit ${flexiblesusy_projects})  #make sure flexiblesusy stuff gets built
  if (NOT EXCLUDE_DELPHES)
    add_dependencies(gambit delphes)
    target_link_libraries(gambit ${delphes_LDFLAGS} ${ROOT_LIBRARIES} ${ROOT_LIBRARY_DIR}/libEG.so)
  endif()
endif()

# Add the ExampleBit_A_standalone executable
if(EXISTS "${PROJECT_SOURCE_DIR}/ExampleBit_A/" AND ";${GAMBIT_BITS};" MATCHES ";ExampleBit_A;")
  add_gambit_executable(ExampleBit_A_standalone SOURCES ${PROJECT_SOURCE_DIR}/ExampleBit_A/examples/ExampleBit_A_standalone_example.cpp $<TARGET_OBJECTS:ExampleBit_A> ${GAMBIT_COMMON_OBJECTS})
  add_dependencies(ExampleBit_A_standalone yaml)
  target_link_libraries(ExampleBit_A_standalone ${yaml_LDFLAGS} ${BOOST_LDFLAGS})
  if (NOT EXCLUDE_DELPHES)
    add_dependencies(ExampleBit_A_standalone delphes)
    target_link_libraries(ExampleBit_A_standalone ${delphes_LDFLAGS} ${ROOT_LIBRARIES} ${ROOT_LIBRARY_DIR}/libEG.so)
  endif()
endif()


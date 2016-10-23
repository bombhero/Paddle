add_subdirectory(cuda)
add_subdirectory(utils)
add_subdirectory(math)
add_subdirectory(parameter)
add_subdirectory(gserver)
add_subdirectory(pserver)
add_subdirectory(trainer)
add_subdirectory(scripts)

if(WITH_SWIG_PY)
  add_subdirectory(api)
endif()

if(WITH_PREDICT_SDK)
  if(WITH_SWIG_PY)
    add_subdirectory(predict)
  else()
    add_subdirectory(api)
    add_subdirectory(predict)
  endif()
endif()

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/setup.py.in
    ${CMAKE_CURRENT_SOURCE_DIR}/setup.py)




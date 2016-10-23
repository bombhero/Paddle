# paddle predict package

set(PREDICT_SOURCES
	Prediction.cpp)

set(PREDICT_HEADERS
	Prediction.h)

add_library(paddle_predict_lib STATIC
    ${PREDICT_SOURCES})

add_style_check_target(paddle_predict_lib
    ${PREDICT_SOURCES})
add_style_check_target(paddle_predict_lib
    ${PREDICT_HEADERS})
add_dependencies(paddle_predict_lib
    gen_proto_cpp)

macro(add_paddle_exe TARGET_NAME)
  add_executable(${TARGET_NAME} ${ARGN})
  add_style_check_target(${TARGET_NAME} ${ARGN})
  link_paddle_exe(${TARGET_NAME})
endmacro()

add_paddle_exe(paddle_predict
    PredictMain.cpp)

#if(WITH_TESTING)
#    add_subdirectory(tests)
#endif()
install(TARGETS paddle_predict
    RUNTIME DESTINATION opt/paddle/bin
    PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ
        GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ)

set_target_properties(paddle_predict PROPERTIES INSTALL_RPATH_USE_LINK_PATH TRUE)

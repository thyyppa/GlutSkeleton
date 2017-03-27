cmake_minimum_required( VERSION 3.7 )
project( GlutSkeleton )
set( CMAKE_CXX_STANDARD 14 )

add_definitions( -DPROJECT_NAME="${PROJECT_NAME}" )
include_directories( app/ )

find_package( OpenGL REQUIRED )
find_package( GLUT REQUIRED )

include_directories( ${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} )

set( SOURCE_FILES main.cpp )

add_executable( ${PROJECT_NAME} ${SOURCE_FILES} )

target_link_libraries( ${PROJECT_NAME} ${OPENGL_LIBRARIES} glut )

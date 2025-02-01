#Setup Swig
find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

# Include python
find_package(Python3 REQUIRED COMPONENTS Interpreter Development)
include_directories(${Python3_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR})

set_source_files_properties(${PROJECT_SOURCE_DIR}/${PROJECT_NAME}.i
  PROPERTIES CPLUSPLUS ON
             COMPILE_DEFINITIONS final=
             GENERATED_COMPILE_DEFINITIONS final=
	     INCLUDE_DIRECTORIES ${PROJECT_SOURCE_DIR}
	     #INCLUDE_DIRECTORIES ${GENDIR}/adaptagram
	     GENERATED_INCLUDE_DIRECTORIES ${PROJECT_SOURCE_DIR}
	     #DEPENDS adaptagram
)

# Add swig module
swig_add_library(py_adaptagrams
  TYPE MODULE
  LANGUAGE python
  SOURCES
  ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}.i
)
target_link_libraries(py_adaptagrams
	#PRIVATE adaptagram
	PRIVATE vpsc avoid cola dialect topology -Llibvpsc -Llibavoid -Llibcola -Llibdialect -Llibtopology
)
IF(APPLE)
    set_property(TARGET py_adaptagrams APPEND_STRING PROPERTY
        LINK_FLAGS "-undefined dynamic_lookup")
ENDIF()

set_target_properties(py_adaptagrams PROPERTIES
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/
)

# this figures out where to install the Python modules
execute_process(
  COMMAND ${Python3_EXECUTABLE} -c "import sysconfig; print(sysconfig.get_path('platlib'))"
  OUTPUT_VARIABLE Python_site_packages
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

install(
  FILES ${CMAKE_CURRENT_BINARY_DIR}/adaptagrams.py
  DESTINATION ${Python_site_packages}
)
install(
  TARGETS py_adaptagrams
  LIBRARY DESTINATION ${Python_site_packages}
)


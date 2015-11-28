PROJECT(aliyun_open_api)
if(NOT WIN32)
if(COVER_TEST)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -fprofile-arcs -ftest-coverage")
set(CMAKE_SHARED_LINKER_FLAGS
    "${CMAKE_SHARED_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")

set(CMAKE_EXE_LINKER_FLAGS
    "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")
endif(COVER_TEST)
endif(NOT WIN32)
ADD_DEFINITIONS(-fPIC)
########### core ################
aux_source_directory(aliyun_api_core/ ALIYUN_API_CORE_SRC)
aux_source_directory(aliyun_api_core/utils/ ALIYUN_API_CORE_UTILS_SRC)
aux_source_directory(aliyun_api_core/http/ ALIYUN_API_CORE_HTTP_SRC)
aux_source_directory(aliyun_api_core/third_party/mbedtls-2.1.2/library/ ALIYUN_API_CORE_MBEDTLS_SRC)
aux_source_directory(aliyun_api_core/third_party/jsoncpp/src/lib_json/ ALIYUN_API_CORE_JSONCPP_SRC)
aux_source_directory(aliyun_api_core/third_party/http_parser/ ALIYUN_API_CORE_HTTPPARSER_SRC)
ADD_LIBRARY(aliyun_api_core STATIC 
			${ALIYUN_API_CORE_SRC}
			${ALIYUN_API_CORE_UTILS_SRC}
      ${ALIYUN_API_CORE_HTTP_SRC}
			${ALIYUN_API_CORE_MBEDTLS_SRC}
			${ALIYUN_API_CORE_JSONCPP_SRC}
			${ALIYUN_API_CORE_HTTPPARSER_SRC}
)
target_include_directories(aliyun_api_core PUBLIC
  aliyun_api_core/
  aliyun_api_core/http/
  aliyun_api_core/utils/
  aliyun_api_core/third_party/jsoncpp/include/
  aliyun_api_core/third_party/jsoncpp/src/lib_json/
  aliyun_api_core/third_party/mbedtls-2.1.2/library/
  aliyun_api_core/third_party/mbedtls-2.1.2/include/
  aliyun_api_core/third_party/http_parser/
)
SET_TARGET_PROPERTIES(aliyun_api_core
PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_core PROPERTIES OUTPUT_NAME "aliyun_api_core")
SET_TARGET_PROPERTIES(aliyun_api_core PROPERTIES CLEAN_DIRECT_OUTPUT 1)
SET(ALIYUN_API_CORE_INCLUDES
    aliyun_api_core/
    aliyun_api_core/http/
    aliyun_api_core/utils/
    aliyun_api_core/third_party/jsoncpp/include/)
#### example ####

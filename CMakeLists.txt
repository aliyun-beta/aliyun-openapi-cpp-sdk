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
#### aliyun-api-aas ####

## 2015-07-01 ##
# static
aux_source_directory(aliyun-api-aas/2015-07-01/src/ ALIYUN-API-AAS_2015_07_01_SRC)
ADD_LIBRARY(aliyun_api_aas_2015_07_01 SHARED ${ALIYUN-API-AAS_2015_07_01_SRC})
  target_include_directories(aliyun_api_aas_2015_07_01 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-aas/2015-07-01/include/
)
target_link_libraries(aliyun_api_aas_2015_07_01 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_aas_2015_07_01
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_aas_2015_07_01 PROPERTIES OUTPUT_NAME "aliyun_api_aas_2015_07_01")
SET_TARGET_PROPERTIES(aliyun_api_aas_2015_07_01 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_aas_2015_07_01_test aliyun-api-aas/2015-07-01/test/aas_test.cc)
target_include_directories(aliyun_api_aas_2015_07_01_test PUBLIC 
  aliyun-api-aas/2015-07-01/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_aas_2015_07_01_test
  aliyun_api_aas_2015_07_01
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_aas_2015_07_01_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-ace ####

## 2015-07-13 ##
# static
aux_source_directory(aliyun-api-ace/2015-07-13/src/ ALIYUN-API-ACE_2015_07_13_SRC)
ADD_LIBRARY(aliyun_api_ace_2015_07_13 SHARED ${ALIYUN-API-ACE_2015_07_13_SRC})
  target_include_directories(aliyun_api_ace_2015_07_13 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ace/2015-07-13/include/
)
target_link_libraries(aliyun_api_ace_2015_07_13 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ace_2015_07_13
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ace_2015_07_13 PROPERTIES OUTPUT_NAME "aliyun_api_ace_2015_07_13")
SET_TARGET_PROPERTIES(aliyun_api_ace_2015_07_13 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ace_2015_07_13_test aliyun-api-ace/2015-07-13/test/ace_test.cc)
target_include_directories(aliyun_api_ace_2015_07_13_test PUBLIC 
  aliyun-api-ace/2015-07-13/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ace_2015_07_13_test
  aliyun_api_ace_2015_07_13
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ace_2015_07_13_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-ace-ops ####

## 2015-09-09 ##
# static
aux_source_directory(aliyun-api-ace-ops/2015-09-09/src/ ALIYUN-API-ACE-OPS_2015_09_09_SRC)
ADD_LIBRARY(aliyun_api_ace_ops_2015_09_09 SHARED ${ALIYUN-API-ACE-OPS_2015_09_09_SRC})
  target_include_directories(aliyun_api_ace_ops_2015_09_09 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ace-ops/2015-09-09/include/
)
target_link_libraries(aliyun_api_ace_ops_2015_09_09 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ace_ops_2015_09_09
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ace_ops_2015_09_09 PROPERTIES OUTPUT_NAME "aliyun_api_ace_ops_2015_09_09")
SET_TARGET_PROPERTIES(aliyun_api_ace_ops_2015_09_09 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ace_ops_2015_09_09_test aliyun-api-ace-ops/2015-09-09/test/aceops_test.cc)
target_include_directories(aliyun_api_ace_ops_2015_09_09_test PUBLIC 
  aliyun-api-ace-ops/2015-09-09/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ace_ops_2015_09_09_test
  aliyun_api_ace_ops_2015_09_09
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ace_ops_2015_09_09_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-alert ####

## 2015-08-15 ##
# static
aux_source_directory(aliyun-api-alert/2015-08-15/src/ ALIYUN-API-ALERT_2015_08_15_SRC)
ADD_LIBRARY(aliyun_api_alert_2015_08_15 SHARED ${ALIYUN-API-ALERT_2015_08_15_SRC})
  target_include_directories(aliyun_api_alert_2015_08_15 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-alert/2015-08-15/include/
)
target_link_libraries(aliyun_api_alert_2015_08_15 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_alert_2015_08_15
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_alert_2015_08_15 PROPERTIES OUTPUT_NAME "aliyun_api_alert_2015_08_15")
SET_TARGET_PROPERTIES(aliyun_api_alert_2015_08_15 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_alert_2015_08_15_test aliyun-api-alert/2015-08-15/test/alert_test.cc)
target_include_directories(aliyun_api_alert_2015_08_15_test PUBLIC 
  aliyun-api-alert/2015-08-15/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_alert_2015_08_15_test
  aliyun_api_alert_2015_08_15
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_alert_2015_08_15_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-batchcompute ####

## 2013-01-11 ##
# static
aux_source_directory(aliyun-api-batchcompute/2013-01-11/src/ ALIYUN-API-BATCHCOMPUTE_2013_01_11_SRC)
ADD_LIBRARY(aliyun_api_batchcompute_2013_01_11 SHARED ${ALIYUN-API-BATCHCOMPUTE_2013_01_11_SRC})
  target_include_directories(aliyun_api_batchcompute_2013_01_11 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-batchcompute/2013-01-11/include/
)
target_link_libraries(aliyun_api_batchcompute_2013_01_11 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_batchcompute_2013_01_11
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_batchcompute_2013_01_11 PROPERTIES OUTPUT_NAME "aliyun_api_batchcompute_2013_01_11")
SET_TARGET_PROPERTIES(aliyun_api_batchcompute_2013_01_11 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_batchcompute_2013_01_11_test aliyun-api-batchcompute/2013-01-11/test/batchcompute_test.cc)
target_include_directories(aliyun_api_batchcompute_2013_01_11_test PUBLIC 
  aliyun-api-batchcompute/2013-01-11/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_batchcompute_2013_01_11_test
  aliyun_api_batchcompute_2013_01_11
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_batchcompute_2013_01_11_test
            PROPERTIES LINKER_LANGUAGE CXX)


## 2015-06-30 ##
# static
aux_source_directory(aliyun-api-batchcompute/2015-06-30/src/ ALIYUN-API-BATCHCOMPUTE_2015_06_30_SRC)
ADD_LIBRARY(aliyun_api_batchcompute_2015_06_30 SHARED ${ALIYUN-API-BATCHCOMPUTE_2015_06_30_SRC})
  target_include_directories(aliyun_api_batchcompute_2015_06_30 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-batchcompute/2015-06-30/include/
)
target_link_libraries(aliyun_api_batchcompute_2015_06_30 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_batchcompute_2015_06_30
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_batchcompute_2015_06_30 PROPERTIES OUTPUT_NAME "aliyun_api_batchcompute_2015_06_30")
SET_TARGET_PROPERTIES(aliyun_api_batchcompute_2015_06_30 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_batchcompute_2015_06_30_test aliyun-api-batchcompute/2015-06-30/test/batchcompute_test.cc)
target_include_directories(aliyun_api_batchcompute_2015_06_30_test PUBLIC 
  aliyun-api-batchcompute/2015-06-30/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_batchcompute_2015_06_30_test
  aliyun_api_batchcompute_2015_06_30
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_batchcompute_2015_06_30_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-bss ####

## 2014-07-14 ##
# static
aux_source_directory(aliyun-api-bss/2014-07-14/src/ ALIYUN-API-BSS_2014_07_14_SRC)
ADD_LIBRARY(aliyun_api_bss_2014_07_14 SHARED ${ALIYUN-API-BSS_2014_07_14_SRC})
  target_include_directories(aliyun_api_bss_2014_07_14 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-bss/2014-07-14/include/
)
target_link_libraries(aliyun_api_bss_2014_07_14 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_bss_2014_07_14
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_bss_2014_07_14 PROPERTIES OUTPUT_NAME "aliyun_api_bss_2014_07_14")
SET_TARGET_PROPERTIES(aliyun_api_bss_2014_07_14 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_bss_2014_07_14_test aliyun-api-bss/2014-07-14/test/bss_test.cc)
target_include_directories(aliyun_api_bss_2014_07_14_test PUBLIC 
  aliyun-api-bss/2014-07-14/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_bss_2014_07_14_test
  aliyun_api_bss_2014_07_14
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_bss_2014_07_14_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-cdn ####

## 2014-11-11 ##
# static
aux_source_directory(aliyun-api-cdn/2014-11-11/src/ ALIYUN-API-CDN_2014_11_11_SRC)
ADD_LIBRARY(aliyun_api_cdn_2014_11_11 SHARED ${ALIYUN-API-CDN_2014_11_11_SRC})
  target_include_directories(aliyun_api_cdn_2014_11_11 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-cdn/2014-11-11/include/
)
target_link_libraries(aliyun_api_cdn_2014_11_11 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_cdn_2014_11_11
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_cdn_2014_11_11 PROPERTIES OUTPUT_NAME "aliyun_api_cdn_2014_11_11")
SET_TARGET_PROPERTIES(aliyun_api_cdn_2014_11_11 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_cdn_2014_11_11_test aliyun-api-cdn/2014-11-11/test/cdn_test.cc)
target_include_directories(aliyun_api_cdn_2014_11_11_test PUBLIC 
  aliyun-api-cdn/2014-11-11/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_cdn_2014_11_11_test
  aliyun_api_cdn_2014_11_11
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_cdn_2014_11_11_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-cms ####

## 2015-04-20 ##
# static
aux_source_directory(aliyun-api-cms/2015-04-20/src/ ALIYUN-API-CMS_2015_04_20_SRC)
ADD_LIBRARY(aliyun_api_cms_2015_04_20 SHARED ${ALIYUN-API-CMS_2015_04_20_SRC})
  target_include_directories(aliyun_api_cms_2015_04_20 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-cms/2015-04-20/include/
)
target_link_libraries(aliyun_api_cms_2015_04_20 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_04_20
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_04_20 PROPERTIES OUTPUT_NAME "aliyun_api_cms_2015_04_20")
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_04_20 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_cms_2015_04_20_test aliyun-api-cms/2015-04-20/test/cms_test.cc)
target_include_directories(aliyun_api_cms_2015_04_20_test PUBLIC 
  aliyun-api-cms/2015-04-20/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_cms_2015_04_20_test
  aliyun_api_cms_2015_04_20
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_04_20_test
            PROPERTIES LINKER_LANGUAGE CXX)


## 2015-07-29 ##
# static
aux_source_directory(aliyun-api-cms/2015-07-29/src/ ALIYUN-API-CMS_2015_07_29_SRC)
ADD_LIBRARY(aliyun_api_cms_2015_07_29 SHARED ${ALIYUN-API-CMS_2015_07_29_SRC})
  target_include_directories(aliyun_api_cms_2015_07_29 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-cms/2015-07-29/include/
)
target_link_libraries(aliyun_api_cms_2015_07_29 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_07_29
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_07_29 PROPERTIES OUTPUT_NAME "aliyun_api_cms_2015_07_29")
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_07_29 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_cms_2015_07_29_test aliyun-api-cms/2015-07-29/test/cms_test.cc)
target_include_directories(aliyun_api_cms_2015_07_29_test PUBLIC 
  aliyun-api-cms/2015-07-29/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_cms_2015_07_29_test
  aliyun_api_cms_2015_07_29
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_07_29_test
            PROPERTIES LINKER_LANGUAGE CXX)


## 2015-08-01 ##
# static
aux_source_directory(aliyun-api-cms/2015-08-01/src/ ALIYUN-API-CMS_2015_08_01_SRC)
ADD_LIBRARY(aliyun_api_cms_2015_08_01 SHARED ${ALIYUN-API-CMS_2015_08_01_SRC})
  target_include_directories(aliyun_api_cms_2015_08_01 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-cms/2015-08-01/include/
)
target_link_libraries(aliyun_api_cms_2015_08_01 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_08_01
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_08_01 PROPERTIES OUTPUT_NAME "aliyun_api_cms_2015_08_01")
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_08_01 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_cms_2015_08_01_test aliyun-api-cms/2015-08-01/test/cms_test.cc)
target_include_directories(aliyun_api_cms_2015_08_01_test PUBLIC 
  aliyun-api-cms/2015-08-01/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_cms_2015_08_01_test
  aliyun_api_cms_2015_08_01
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_08_01_test
            PROPERTIES LINKER_LANGUAGE CXX)


## 2015-10-20 ##
# static
aux_source_directory(aliyun-api-cms/2015-10-20/src/ ALIYUN-API-CMS_2015_10_20_SRC)
ADD_LIBRARY(aliyun_api_cms_2015_10_20 SHARED ${ALIYUN-API-CMS_2015_10_20_SRC})
  target_include_directories(aliyun_api_cms_2015_10_20 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-cms/2015-10-20/include/
)
target_link_libraries(aliyun_api_cms_2015_10_20 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_10_20
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_10_20 PROPERTIES OUTPUT_NAME "aliyun_api_cms_2015_10_20")
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_10_20 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_cms_2015_10_20_test aliyun-api-cms/2015-10-20/test/cms_test.cc)
target_include_directories(aliyun_api_cms_2015_10_20_test PUBLIC 
  aliyun-api-cms/2015-10-20/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_cms_2015_10_20_test
  aliyun_api_cms_2015_10_20
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_cms_2015_10_20_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-crm ####

## 2015-04-08 ##
# static
aux_source_directory(aliyun-api-crm/2015-04-08/src/ ALIYUN-API-CRM_2015_04_08_SRC)
ADD_LIBRARY(aliyun_api_crm_2015_04_08 SHARED ${ALIYUN-API-CRM_2015_04_08_SRC})
  target_include_directories(aliyun_api_crm_2015_04_08 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-crm/2015-04-08/include/
)
target_link_libraries(aliyun_api_crm_2015_04_08 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_crm_2015_04_08
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_crm_2015_04_08 PROPERTIES OUTPUT_NAME "aliyun_api_crm_2015_04_08")
SET_TARGET_PROPERTIES(aliyun_api_crm_2015_04_08 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_crm_2015_04_08_test aliyun-api-crm/2015-04-08/test/crm_test.cc)
target_include_directories(aliyun_api_crm_2015_04_08_test PUBLIC 
  aliyun-api-crm/2015-04-08/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_crm_2015_04_08_test
  aliyun_api_crm_2015_04_08
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_crm_2015_04_08_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-drds ####

## 2015-04-13 ##
# static
aux_source_directory(aliyun-api-drds/2015-04-13/src/ ALIYUN-API-DRDS_2015_04_13_SRC)
ADD_LIBRARY(aliyun_api_drds_2015_04_13 SHARED ${ALIYUN-API-DRDS_2015_04_13_SRC})
  target_include_directories(aliyun_api_drds_2015_04_13 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-drds/2015-04-13/include/
)
target_link_libraries(aliyun_api_drds_2015_04_13 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_drds_2015_04_13
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_drds_2015_04_13 PROPERTIES OUTPUT_NAME "aliyun_api_drds_2015_04_13")
SET_TARGET_PROPERTIES(aliyun_api_drds_2015_04_13 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_drds_2015_04_13_test aliyun-api-drds/2015-04-13/test/drds_test.cc)
target_include_directories(aliyun_api_drds_2015_04_13_test PUBLIC 
  aliyun-api-drds/2015-04-13/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_drds_2015_04_13_test
  aliyun_api_drds_2015_04_13
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_drds_2015_04_13_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-dts ####

## 2015-06-29 ##
# static
aux_source_directory(aliyun-api-dts/2015-06-29/src/ ALIYUN-API-DTS_2015_06_29_SRC)
ADD_LIBRARY(aliyun_api_dts_2015_06_29 SHARED ${ALIYUN-API-DTS_2015_06_29_SRC})
  target_include_directories(aliyun_api_dts_2015_06_29 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-dts/2015-06-29/include/
)
target_link_libraries(aliyun_api_dts_2015_06_29 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_dts_2015_06_29
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_dts_2015_06_29 PROPERTIES OUTPUT_NAME "aliyun_api_dts_2015_06_29")
SET_TARGET_PROPERTIES(aliyun_api_dts_2015_06_29 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_dts_2015_06_29_test aliyun-api-dts/2015-06-29/test/dts_test.cc)
target_include_directories(aliyun_api_dts_2015_06_29_test PUBLIC 
  aliyun-api-dts/2015-06-29/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_dts_2015_06_29_test
  aliyun_api_dts_2015_06_29
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_dts_2015_06_29_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-ecs ####

## 2014-05-26 ##
# static
aux_source_directory(aliyun-api-ecs/2014-05-26/src/ ALIYUN-API-ECS_2014_05_26_SRC)
ADD_LIBRARY(aliyun_api_ecs_2014_05_26 SHARED ${ALIYUN-API-ECS_2014_05_26_SRC})
  target_include_directories(aliyun_api_ecs_2014_05_26 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ecs/2014-05-26/include/
)
target_link_libraries(aliyun_api_ecs_2014_05_26 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ecs_2014_05_26
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ecs_2014_05_26 PROPERTIES OUTPUT_NAME "aliyun_api_ecs_2014_05_26")
SET_TARGET_PROPERTIES(aliyun_api_ecs_2014_05_26 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ecs_2014_05_26_test aliyun-api-ecs/2014-05-26/test/ecs_test.cc)
target_include_directories(aliyun_api_ecs_2014_05_26_test PUBLIC 
  aliyun-api-ecs/2014-05-26/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ecs_2014_05_26_test
  aliyun_api_ecs_2014_05_26
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ecs_2014_05_26_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-emr ####

## 2015-09-10 ##
# static
aux_source_directory(aliyun-api-emr/2015-09-10/src/ ALIYUN-API-EMR_2015_09_10_SRC)
ADD_LIBRARY(aliyun_api_emr_2015_09_10 SHARED ${ALIYUN-API-EMR_2015_09_10_SRC})
  target_include_directories(aliyun_api_emr_2015_09_10 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-emr/2015-09-10/include/
)
target_link_libraries(aliyun_api_emr_2015_09_10 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_emr_2015_09_10
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_emr_2015_09_10 PROPERTIES OUTPUT_NAME "aliyun_api_emr_2015_09_10")
SET_TARGET_PROPERTIES(aliyun_api_emr_2015_09_10 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_emr_2015_09_10_test aliyun-api-emr/2015-09-10/test/emr_test.cc)
target_include_directories(aliyun_api_emr_2015_09_10_test PUBLIC 
  aliyun-api-emr/2015-09-10/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_emr_2015_09_10_test
  aliyun_api_emr_2015_09_10
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_emr_2015_09_10_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-ess ####

## 2014-08-28 ##
# static
aux_source_directory(aliyun-api-ess/2014-08-28/src/ ALIYUN-API-ESS_2014_08_28_SRC)
ADD_LIBRARY(aliyun_api_ess_2014_08_28 SHARED ${ALIYUN-API-ESS_2014_08_28_SRC})
  target_include_directories(aliyun_api_ess_2014_08_28 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ess/2014-08-28/include/
)
target_link_libraries(aliyun_api_ess_2014_08_28 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ess_2014_08_28
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ess_2014_08_28 PROPERTIES OUTPUT_NAME "aliyun_api_ess_2014_08_28")
SET_TARGET_PROPERTIES(aliyun_api_ess_2014_08_28 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ess_2014_08_28_test aliyun-api-ess/2014-08-28/test/ess_test.cc)
target_include_directories(aliyun_api_ess_2014_08_28_test PUBLIC 
  aliyun-api-ess/2014-08-28/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ess_2014_08_28_test
  aliyun_api_ess_2014_08_28
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ess_2014_08_28_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-ocs ####

## 2015-03-01 ##
# static
aux_source_directory(aliyun-api-ocs/2015-03-01/src/ ALIYUN-API-OCS_2015_03_01_SRC)
ADD_LIBRARY(aliyun_api_ocs_2015_03_01 SHARED ${ALIYUN-API-OCS_2015_03_01_SRC})
  target_include_directories(aliyun_api_ocs_2015_03_01 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ocs/2015-03-01/include/
)
target_link_libraries(aliyun_api_ocs_2015_03_01 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ocs_2015_03_01
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ocs_2015_03_01 PROPERTIES OUTPUT_NAME "aliyun_api_ocs_2015_03_01")
SET_TARGET_PROPERTIES(aliyun_api_ocs_2015_03_01 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ocs_2015_03_01_test aliyun-api-ocs/2015-03-01/test/ocs_test.cc)
target_include_directories(aliyun_api_ocs_2015_03_01_test PUBLIC 
  aliyun-api-ocs/2015-03-01/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ocs_2015_03_01_test
  aliyun_api_ocs_2015_03_01
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ocs_2015_03_01_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-oms ####

## 2015-02-12 ##
# static
aux_source_directory(aliyun-api-oms/2015-02-12/src/ ALIYUN-API-OMS_2015_02_12_SRC)
ADD_LIBRARY(aliyun_api_oms_2015_02_12 SHARED ${ALIYUN-API-OMS_2015_02_12_SRC})
  target_include_directories(aliyun_api_oms_2015_02_12 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-oms/2015-02-12/include/
)
target_link_libraries(aliyun_api_oms_2015_02_12 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_oms_2015_02_12
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_oms_2015_02_12 PROPERTIES OUTPUT_NAME "aliyun_api_oms_2015_02_12")
SET_TARGET_PROPERTIES(aliyun_api_oms_2015_02_12 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_oms_2015_02_12_test aliyun-api-oms/2015-02-12/test/oms_test.cc)
target_include_directories(aliyun_api_oms_2015_02_12_test PUBLIC 
  aliyun-api-oms/2015-02-12/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_oms_2015_02_12_test
  aliyun_api_oms_2015_02_12
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_oms_2015_02_12_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-ons ####

## 2015-10-20 ##
# static
aux_source_directory(aliyun-api-ons/2015-10-20/src/ ALIYUN-API-ONS_2015_10_20_SRC)
ADD_LIBRARY(aliyun_api_ons_2015_10_20 SHARED ${ALIYUN-API-ONS_2015_10_20_SRC})
  target_include_directories(aliyun_api_ons_2015_10_20 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ons/2015-10-20/include/
)
target_link_libraries(aliyun_api_ons_2015_10_20 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ons_2015_10_20
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ons_2015_10_20 PROPERTIES OUTPUT_NAME "aliyun_api_ons_2015_10_20")
SET_TARGET_PROPERTIES(aliyun_api_ons_2015_10_20 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ons_2015_10_20_test aliyun-api-ons/2015-10-20/test/ons_test.cc)
target_include_directories(aliyun_api_ons_2015_10_20_test PUBLIC 
  aliyun-api-ons/2015-10-20/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ons_2015_10_20_test
  aliyun_api_ons_2015_10_20
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ons_2015_10_20_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-ossadmin ####

## 2013-07-12 ##
# static
aux_source_directory(aliyun-api-ossadmin/2013-07-12/src/ ALIYUN-API-OSSADMIN_2013_07_12_SRC)
ADD_LIBRARY(aliyun_api_ossadmin_2013_07_12 SHARED ${ALIYUN-API-OSSADMIN_2013_07_12_SRC})
  target_include_directories(aliyun_api_ossadmin_2013_07_12 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ossadmin/2013-07-12/include/
)
target_link_libraries(aliyun_api_ossadmin_2013_07_12 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2013_07_12
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2013_07_12 PROPERTIES OUTPUT_NAME "aliyun_api_ossadmin_2013_07_12")
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2013_07_12 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ossadmin_2013_07_12_test aliyun-api-ossadmin/2013-07-12/test/ossadmin_test.cc)
target_include_directories(aliyun_api_ossadmin_2013_07_12_test PUBLIC 
  aliyun-api-ossadmin/2013-07-12/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ossadmin_2013_07_12_test
  aliyun_api_ossadmin_2013_07_12
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2013_07_12_test
            PROPERTIES LINKER_LANGUAGE CXX)


## 2014-03-26 ##
# static
aux_source_directory(aliyun-api-ossadmin/2014-03-26/src/ ALIYUN-API-OSSADMIN_2014_03_26_SRC)
ADD_LIBRARY(aliyun_api_ossadmin_2014_03_26 SHARED ${ALIYUN-API-OSSADMIN_2014_03_26_SRC})
  target_include_directories(aliyun_api_ossadmin_2014_03_26 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ossadmin/2014-03-26/include/
)
target_link_libraries(aliyun_api_ossadmin_2014_03_26 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2014_03_26
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2014_03_26 PROPERTIES OUTPUT_NAME "aliyun_api_ossadmin_2014_03_26")
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2014_03_26 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ossadmin_2014_03_26_test aliyun-api-ossadmin/2014-03-26/test/ossadmin_test.cc)
target_include_directories(aliyun_api_ossadmin_2014_03_26_test PUBLIC 
  aliyun-api-ossadmin/2014-03-26/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ossadmin_2014_03_26_test
  aliyun_api_ossadmin_2014_03_26
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2014_03_26_test
            PROPERTIES LINKER_LANGUAGE CXX)


## 2015-03-02 ##
# static
aux_source_directory(aliyun-api-ossadmin/2015-03-02/src/ ALIYUN-API-OSSADMIN_2015_03_02_SRC)
ADD_LIBRARY(aliyun_api_ossadmin_2015_03_02 SHARED ${ALIYUN-API-OSSADMIN_2015_03_02_SRC})
  target_include_directories(aliyun_api_ossadmin_2015_03_02 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ossadmin/2015-03-02/include/
)
target_link_libraries(aliyun_api_ossadmin_2015_03_02 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2015_03_02
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2015_03_02 PROPERTIES OUTPUT_NAME "aliyun_api_ossadmin_2015_03_02")
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2015_03_02 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ossadmin_2015_03_02_test aliyun-api-ossadmin/2015-03-02/test/ossadmin_test.cc)
target_include_directories(aliyun_api_ossadmin_2015_03_02_test PUBLIC 
  aliyun-api-ossadmin/2015-03-02/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ossadmin_2015_03_02_test
  aliyun_api_ossadmin_2015_03_02
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2015_03_02_test
            PROPERTIES LINKER_LANGUAGE CXX)


## 2015-05-20 ##
# static
aux_source_directory(aliyun-api-ossadmin/2015-05-20/src/ ALIYUN-API-OSSADMIN_2015_05_20_SRC)
ADD_LIBRARY(aliyun_api_ossadmin_2015_05_20 SHARED ${ALIYUN-API-OSSADMIN_2015_05_20_SRC})
  target_include_directories(aliyun_api_ossadmin_2015_05_20 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ossadmin/2015-05-20/include/
)
target_link_libraries(aliyun_api_ossadmin_2015_05_20 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2015_05_20
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2015_05_20 PROPERTIES OUTPUT_NAME "aliyun_api_ossadmin_2015_05_20")
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2015_05_20 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ossadmin_2015_05_20_test aliyun-api-ossadmin/2015-05-20/test/ossadmin_test.cc)
target_include_directories(aliyun_api_ossadmin_2015_05_20_test PUBLIC 
  aliyun-api-ossadmin/2015-05-20/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ossadmin_2015_05_20_test
  aliyun_api_ossadmin_2015_05_20
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ossadmin_2015_05_20_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-ots ####

## 2013-09-12 ##
# static
aux_source_directory(aliyun-api-ots/2013-09-12/src/ ALIYUN-API-OTS_2013_09_12_SRC)
ADD_LIBRARY(aliyun_api_ots_2013_09_12 SHARED ${ALIYUN-API-OTS_2013_09_12_SRC})
  target_include_directories(aliyun_api_ots_2013_09_12 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ots/2013-09-12/include/
)
target_link_libraries(aliyun_api_ots_2013_09_12 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ots_2013_09_12
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ots_2013_09_12 PROPERTIES OUTPUT_NAME "aliyun_api_ots_2013_09_12")
SET_TARGET_PROPERTIES(aliyun_api_ots_2013_09_12 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ots_2013_09_12_test aliyun-api-ots/2013-09-12/test/ots_test.cc)
target_include_directories(aliyun_api_ots_2013_09_12_test PUBLIC 
  aliyun-api-ots/2013-09-12/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ots_2013_09_12_test
  aliyun_api_ots_2013_09_12
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ots_2013_09_12_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-otsfinance ####

## 2013-09-12 ##
# static
aux_source_directory(aliyun-api-otsfinance/2013-09-12/src/ ALIYUN-API-OTSFINANCE_2013_09_12_SRC)
ADD_LIBRARY(aliyun_api_otsfinance_2013_09_12 SHARED ${ALIYUN-API-OTSFINANCE_2013_09_12_SRC})
  target_include_directories(aliyun_api_otsfinance_2013_09_12 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-otsfinance/2013-09-12/include/
)
target_link_libraries(aliyun_api_otsfinance_2013_09_12 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_otsfinance_2013_09_12
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_otsfinance_2013_09_12 PROPERTIES OUTPUT_NAME "aliyun_api_otsfinance_2013_09_12")
SET_TARGET_PROPERTIES(aliyun_api_otsfinance_2013_09_12 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_otsfinance_2013_09_12_test aliyun-api-otsfinance/2013-09-12/test/otsfinance_test.cc)
target_include_directories(aliyun_api_otsfinance_2013_09_12_test PUBLIC 
  aliyun-api-otsfinance/2013-09-12/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_otsfinance_2013_09_12_test
  aliyun_api_otsfinance_2013_09_12
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_otsfinance_2013_09_12_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-otsshihua ####

## 2015-10-26 ##
# static
aux_source_directory(aliyun-api-otsshihua/2015-10-26/src/ ALIYUN-API-OTSSHIHUA_2015_10_26_SRC)
ADD_LIBRARY(aliyun_api_otsshihua_2015_10_26 SHARED ${ALIYUN-API-OTSSHIHUA_2015_10_26_SRC})
  target_include_directories(aliyun_api_otsshihua_2015_10_26 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-otsshihua/2015-10-26/include/
)
target_link_libraries(aliyun_api_otsshihua_2015_10_26 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_otsshihua_2015_10_26
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_otsshihua_2015_10_26 PROPERTIES OUTPUT_NAME "aliyun_api_otsshihua_2015_10_26")
SET_TARGET_PROPERTIES(aliyun_api_otsshihua_2015_10_26 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_otsshihua_2015_10_26_test aliyun-api-otsshihua/2015-10-26/test/otsshihua_test.cc)
target_include_directories(aliyun_api_otsshihua_2015_10_26_test PUBLIC 
  aliyun-api-otsshihua/2015-10-26/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_otsshihua_2015_10_26_test
  aliyun_api_otsshihua_2015_10_26
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_otsshihua_2015_10_26_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-pts ####

## 2015-08-01 ##
# static
aux_source_directory(aliyun-api-pts/2015-08-01/src/ ALIYUN-API-PTS_2015_08_01_SRC)
ADD_LIBRARY(aliyun_api_pts_2015_08_01 SHARED ${ALIYUN-API-PTS_2015_08_01_SRC})
  target_include_directories(aliyun_api_pts_2015_08_01 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-pts/2015-08-01/include/
)
target_link_libraries(aliyun_api_pts_2015_08_01 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_pts_2015_08_01
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_pts_2015_08_01 PROPERTIES OUTPUT_NAME "aliyun_api_pts_2015_08_01")
SET_TARGET_PROPERTIES(aliyun_api_pts_2015_08_01 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_pts_2015_08_01_test aliyun-api-pts/2015-08-01/test/pts_test.cc)
target_include_directories(aliyun_api_pts_2015_08_01_test PUBLIC 
  aliyun-api-pts/2015-08-01/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_pts_2015_08_01_test
  aliyun_api_pts_2015_08_01
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_pts_2015_08_01_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-push ####

## 2015-08-27 ##
# static
aux_source_directory(aliyun-api-push/2015-08-27/src/ ALIYUN-API-PUSH_2015_08_27_SRC)
ADD_LIBRARY(aliyun_api_push_2015_08_27 SHARED ${ALIYUN-API-PUSH_2015_08_27_SRC})
  target_include_directories(aliyun_api_push_2015_08_27 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-push/2015-08-27/include/
)
target_link_libraries(aliyun_api_push_2015_08_27 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_push_2015_08_27
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_push_2015_08_27 PROPERTIES OUTPUT_NAME "aliyun_api_push_2015_08_27")
SET_TARGET_PROPERTIES(aliyun_api_push_2015_08_27 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_push_2015_08_27_test aliyun-api-push/2015-08-27/test/push_test.cc)
target_include_directories(aliyun_api_push_2015_08_27_test PUBLIC 
  aliyun-api-push/2015-08-27/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_push_2015_08_27_test
  aliyun_api_push_2015_08_27
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_push_2015_08_27_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-r-kvstore ####

## 2015-01-01 ##
# static
aux_source_directory(aliyun-api-r-kvstore/2015-01-01/src/ ALIYUN-API-R-KVSTORE_2015_01_01_SRC)
ADD_LIBRARY(aliyun_api_r_kvstore_2015_01_01 SHARED ${ALIYUN-API-R-KVSTORE_2015_01_01_SRC})
  target_include_directories(aliyun_api_r_kvstore_2015_01_01 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-r-kvstore/2015-01-01/include/
)
target_link_libraries(aliyun_api_r_kvstore_2015_01_01 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_r_kvstore_2015_01_01
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_r_kvstore_2015_01_01 PROPERTIES OUTPUT_NAME "aliyun_api_r_kvstore_2015_01_01")
SET_TARGET_PROPERTIES(aliyun_api_r_kvstore_2015_01_01 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_r_kvstore_2015_01_01_test aliyun-api-r-kvstore/2015-01-01/test/rkvstore_test.cc)
target_include_directories(aliyun_api_r_kvstore_2015_01_01_test PUBLIC 
  aliyun-api-r-kvstore/2015-01-01/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_r_kvstore_2015_01_01_test
  aliyun_api_r_kvstore_2015_01_01
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_r_kvstore_2015_01_01_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-ram ####

## 2014-02-14 ##
# static
aux_source_directory(aliyun-api-ram/2014-02-14/src/ ALIYUN-API-RAM_2014_02_14_SRC)
ADD_LIBRARY(aliyun_api_ram_2014_02_14 SHARED ${ALIYUN-API-RAM_2014_02_14_SRC})
  target_include_directories(aliyun_api_ram_2014_02_14 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ram/2014-02-14/include/
)
target_link_libraries(aliyun_api_ram_2014_02_14 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ram_2014_02_14
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ram_2014_02_14 PROPERTIES OUTPUT_NAME "aliyun_api_ram_2014_02_14")
SET_TARGET_PROPERTIES(aliyun_api_ram_2014_02_14 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ram_2014_02_14_test aliyun-api-ram/2014-02-14/test/ram_test.cc)
target_include_directories(aliyun_api_ram_2014_02_14_test PUBLIC 
  aliyun-api-ram/2014-02-14/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ram_2014_02_14_test
  aliyun_api_ram_2014_02_14
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ram_2014_02_14_test
            PROPERTIES LINKER_LANGUAGE CXX)


## 2015-05-01 ##
# static
aux_source_directory(aliyun-api-ram/2015-05-01/src/ ALIYUN-API-RAM_2015_05_01_SRC)
ADD_LIBRARY(aliyun_api_ram_2015_05_01 SHARED ${ALIYUN-API-RAM_2015_05_01_SRC})
  target_include_directories(aliyun_api_ram_2015_05_01 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ram/2015-05-01/include/
)
target_link_libraries(aliyun_api_ram_2015_05_01 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ram_2015_05_01
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ram_2015_05_01 PROPERTIES OUTPUT_NAME "aliyun_api_ram_2015_05_01")
SET_TARGET_PROPERTIES(aliyun_api_ram_2015_05_01 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ram_2015_05_01_test aliyun-api-ram/2015-05-01/test/ram_test.cc)
target_include_directories(aliyun_api_ram_2015_05_01_test PUBLIC 
  aliyun-api-ram/2015-05-01/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ram_2015_05_01_test
  aliyun_api_ram_2015_05_01
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ram_2015_05_01_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-rds ####

## 2014-08-15 ##
# static
aux_source_directory(aliyun-api-rds/2014-08-15/src/ ALIYUN-API-RDS_2014_08_15_SRC)
ADD_LIBRARY(aliyun_api_rds_2014_08_15 SHARED ${ALIYUN-API-RDS_2014_08_15_SRC})
  target_include_directories(aliyun_api_rds_2014_08_15 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-rds/2014-08-15/include/
)
target_link_libraries(aliyun_api_rds_2014_08_15 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_rds_2014_08_15
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_rds_2014_08_15 PROPERTIES OUTPUT_NAME "aliyun_api_rds_2014_08_15")
SET_TARGET_PROPERTIES(aliyun_api_rds_2014_08_15 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_rds_2014_08_15_test aliyun-api-rds/2014-08-15/test/rds_test.cc)
target_include_directories(aliyun_api_rds_2014_08_15_test PUBLIC 
  aliyun-api-rds/2014-08-15/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_rds_2014_08_15_test
  aliyun_api_rds_2014_08_15
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_rds_2014_08_15_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-rds_region ####

## 2014-08-15 ##
# static
aux_source_directory(aliyun-api-rds_region/2014-08-15/src/ ALIYUN-API-RDS_REGION_2014_08_15_SRC)
ADD_LIBRARY(aliyun_api_rds_region_2014_08_15 SHARED ${ALIYUN-API-RDS_REGION_2014_08_15_SRC})
  target_include_directories(aliyun_api_rds_region_2014_08_15 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-rds_region/2014-08-15/include/
)
target_link_libraries(aliyun_api_rds_region_2014_08_15 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_rds_region_2014_08_15
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_rds_region_2014_08_15 PROPERTIES OUTPUT_NAME "aliyun_api_rds_region_2014_08_15")
SET_TARGET_PROPERTIES(aliyun_api_rds_region_2014_08_15 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_rds_region_2014_08_15_test aliyun-api-rds_region/2014-08-15/test/rdsregion_test.cc)
target_include_directories(aliyun_api_rds_region_2014_08_15_test PUBLIC 
  aliyun-api-rds_region/2014-08-15/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_rds_region_2014_08_15_test
  aliyun_api_rds_region_2014_08_15
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_rds_region_2014_08_15_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-slb ####

## 2013-02-21 ##
# static
aux_source_directory(aliyun-api-slb/2013-02-21/src/ ALIYUN-API-SLB_2013_02_21_SRC)
ADD_LIBRARY(aliyun_api_slb_2013_02_21 SHARED ${ALIYUN-API-SLB_2013_02_21_SRC})
  target_include_directories(aliyun_api_slb_2013_02_21 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-slb/2013-02-21/include/
)
target_link_libraries(aliyun_api_slb_2013_02_21 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_slb_2013_02_21
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_slb_2013_02_21 PROPERTIES OUTPUT_NAME "aliyun_api_slb_2013_02_21")
SET_TARGET_PROPERTIES(aliyun_api_slb_2013_02_21 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_slb_2013_02_21_test aliyun-api-slb/2013-02-21/test/slb_test.cc)
target_include_directories(aliyun_api_slb_2013_02_21_test PUBLIC 
  aliyun-api-slb/2013-02-21/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_slb_2013_02_21_test
  aliyun_api_slb_2013_02_21
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_slb_2013_02_21_test
            PROPERTIES LINKER_LANGUAGE CXX)


## 2014-05-15 ##
# static
aux_source_directory(aliyun-api-slb/2014-05-15/src/ ALIYUN-API-SLB_2014_05_15_SRC)
ADD_LIBRARY(aliyun_api_slb_2014_05_15 SHARED ${ALIYUN-API-SLB_2014_05_15_SRC})
  target_include_directories(aliyun_api_slb_2014_05_15 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-slb/2014-05-15/include/
)
target_link_libraries(aliyun_api_slb_2014_05_15 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_slb_2014_05_15
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_slb_2014_05_15 PROPERTIES OUTPUT_NAME "aliyun_api_slb_2014_05_15")
SET_TARGET_PROPERTIES(aliyun_api_slb_2014_05_15 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_slb_2014_05_15_test aliyun-api-slb/2014-05-15/test/slb_test.cc)
target_include_directories(aliyun_api_slb_2014_05_15_test PUBLIC 
  aliyun-api-slb/2014-05-15/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_slb_2014_05_15_test
  aliyun_api_slb_2014_05_15
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_slb_2014_05_15_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-sts ####

## 2015-04-01 ##
# static
aux_source_directory(aliyun-api-sts/2015-04-01/src/ ALIYUN-API-STS_2015_04_01_SRC)
ADD_LIBRARY(aliyun_api_sts_2015_04_01 SHARED ${ALIYUN-API-STS_2015_04_01_SRC})
  target_include_directories(aliyun_api_sts_2015_04_01 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-sts/2015-04-01/include/
)
target_link_libraries(aliyun_api_sts_2015_04_01 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_sts_2015_04_01
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_sts_2015_04_01 PROPERTIES OUTPUT_NAME "aliyun_api_sts_2015_04_01")
SET_TARGET_PROPERTIES(aliyun_api_sts_2015_04_01 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_sts_2015_04_01_test aliyun-api-sts/2015-04-01/test/sts_test.cc)
target_include_directories(aliyun_api_sts_2015_04_01_test PUBLIC 
  aliyun-api-sts/2015-04-01/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_sts_2015_04_01_test
  aliyun_api_sts_2015_04_01
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_sts_2015_04_01_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-ubsms ####

## 2015-06-23 ##
# static
aux_source_directory(aliyun-api-ubsms/2015-06-23/src/ ALIYUN-API-UBSMS_2015_06_23_SRC)
ADD_LIBRARY(aliyun_api_ubsms_2015_06_23 SHARED ${ALIYUN-API-UBSMS_2015_06_23_SRC})
  target_include_directories(aliyun_api_ubsms_2015_06_23 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-ubsms/2015-06-23/include/
)
target_link_libraries(aliyun_api_ubsms_2015_06_23 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_ubsms_2015_06_23
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_ubsms_2015_06_23 PROPERTIES OUTPUT_NAME "aliyun_api_ubsms_2015_06_23")
SET_TARGET_PROPERTIES(aliyun_api_ubsms_2015_06_23 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_ubsms_2015_06_23_test aliyun-api-ubsms/2015-06-23/test/ubsms_test.cc)
target_include_directories(aliyun_api_ubsms_2015_06_23_test PUBLIC 
  aliyun-api-ubsms/2015-06-23/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_ubsms_2015_06_23_test
  aliyun_api_ubsms_2015_06_23
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_ubsms_2015_06_23_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### aliyun-api-yundun ####

## 2015-02-27 ##
# static
aux_source_directory(aliyun-api-yundun/2015-02-27/src/ ALIYUN-API-YUNDUN_2015_02_27_SRC)
ADD_LIBRARY(aliyun_api_yundun_2015_02_27 SHARED ${ALIYUN-API-YUNDUN_2015_02_27_SRC})
  target_include_directories(aliyun_api_yundun_2015_02_27 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-yundun/2015-02-27/include/
)
target_link_libraries(aliyun_api_yundun_2015_02_27 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_yundun_2015_02_27
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_yundun_2015_02_27 PROPERTIES OUTPUT_NAME "aliyun_api_yundun_2015_02_27")
SET_TARGET_PROPERTIES(aliyun_api_yundun_2015_02_27 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_yundun_2015_02_27_test aliyun-api-yundun/2015-02-27/test/yundun_test.cc)
target_include_directories(aliyun_api_yundun_2015_02_27_test PUBLIC 
  aliyun-api-yundun/2015-02-27/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_yundun_2015_02_27_test
  aliyun_api_yundun_2015_02_27
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_yundun_2015_02_27_test
            PROPERTIES LINKER_LANGUAGE CXX)


## 2015-04-16 ##
# static
aux_source_directory(aliyun-api-yundun/2015-04-16/src/ ALIYUN-API-YUNDUN_2015_04_16_SRC)
ADD_LIBRARY(aliyun_api_yundun_2015_04_16 SHARED ${ALIYUN-API-YUNDUN_2015_04_16_SRC})
  target_include_directories(aliyun_api_yundun_2015_04_16 PUBLIC 
  ${ALIYUN_API_CORE_INCLUDES}
  aliyun-api-yundun/2015-04-16/include/
)
target_link_libraries(aliyun_api_yundun_2015_04_16 aliyun_api_core)
SET_TARGET_PROPERTIES(aliyun_api_yundun_2015_04_16
            PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(aliyun_api_yundun_2015_04_16 PROPERTIES OUTPUT_NAME "aliyun_api_yundun_2015_04_16")
SET_TARGET_PROPERTIES(aliyun_api_yundun_2015_04_16 PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_executable(aliyun_api_yundun_2015_04_16_test aliyun-api-yundun/2015-04-16/test/yundun_test.cc)
target_include_directories(aliyun_api_yundun_2015_04_16_test PUBLIC 
  aliyun-api-yundun/2015-04-16/include/
  ${ALIYUN_API_CORE_INCLUDES}
)
target_link_libraries(aliyun_api_yundun_2015_04_16_test
  aliyun_api_yundun_2015_04_16
  aliyun_api_core
)
SET_TARGET_PROPERTIES(aliyun_api_yundun_2015_04_16_test
            PROPERTIES LINKER_LANGUAGE CXX)


#### example ####

STATIC_TARGET=libaliyun_core.a
TEST_TARGET= 	testc
TEST_DEPS = \
	test/test.o \
	test/http_test_listener.o

DEPS = \
	ali_roa_request.o \
	ali_rpc_request.o \
	ali_get_region_host.o \
	http/ali_http_request.o \
	http/ali_tls_connection.o \
	http/ali_tcp_connection.o \
	utils/ali_string_utils.o \
	utils/ali_encode_utils.o \
	utils/ali_urlencode.o

MBEDTLS_DEPS = \
	third_party/mbedtls-2.1.2/library/aes.o	\
	third_party/mbedtls-2.1.2/library/aesni.o \
	third_party/mbedtls-2.1.2/library/arc4.o \
	third_party/mbedtls-2.1.2/library/asn1parse.o	\
	third_party/mbedtls-2.1.2/library/asn1write.o	\
	third_party/mbedtls-2.1.2/library/base64.o \
	third_party/mbedtls-2.1.2/library/bignum.o \
	third_party/mbedtls-2.1.2/library/blowfish.o \
	third_party/mbedtls-2.1.2/library/camellia.o \
	third_party/mbedtls-2.1.2/library/ccm.o	\
	third_party/mbedtls-2.1.2/library/cipher.o \
	third_party/mbedtls-2.1.2/library/cipher_wrap.o	\
	third_party/mbedtls-2.1.2/library/ctr_drbg.o \
	third_party/mbedtls-2.1.2/library/des.o	\
	third_party/mbedtls-2.1.2/library/dhm.o	\
	third_party/mbedtls-2.1.2/library/ecdh.o \
	third_party/mbedtls-2.1.2/library/ecdsa.o	\
	third_party/mbedtls-2.1.2/library/ecp.o	\
	third_party/mbedtls-2.1.2/library/ecp_curves.o \
	third_party/mbedtls-2.1.2/library/entropy.o	\
	third_party/mbedtls-2.1.2/library/entropy_poll.o \
	third_party/mbedtls-2.1.2/library/error.o		\
	third_party/mbedtls-2.1.2/library/gcm.o	\
	third_party/mbedtls-2.1.2/library/havege.o \
	third_party/mbedtls-2.1.2/library/hmac_drbg.o	\
	third_party/mbedtls-2.1.2/library/md.o \
	third_party/mbedtls-2.1.2/library/md2.o	\
	third_party/mbedtls-2.1.2/library/md4.o	\
	third_party/mbedtls-2.1.2/library/md5.o	\
	third_party/mbedtls-2.1.2/library/md_wrap.o	\
	third_party/mbedtls-2.1.2/library/memory_buffer_alloc.o		\
	third_party/mbedtls-2.1.2/library/oid.o		\
	third_party/mbedtls-2.1.2/library/padlock.o	\
	third_party/mbedtls-2.1.2/library/pem.o	\
	third_party/mbedtls-2.1.2/library/pk.o \
	third_party/mbedtls-2.1.2/library/pk_wrap.o	\
	third_party/mbedtls-2.1.2/library/pkcs12.o	\
	third_party/mbedtls-2.1.2/library/pkcs5.o		\
	third_party/mbedtls-2.1.2/library/pkparse.o	\
	third_party/mbedtls-2.1.2/library/pkwrite.o	\
	third_party/mbedtls-2.1.2/library/platform.o	\
	third_party/mbedtls-2.1.2/library/ripemd160.o	\
	third_party/mbedtls-2.1.2/library/rsa.o		\
	third_party/mbedtls-2.1.2/library/sha1.o		\
	third_party/mbedtls-2.1.2/library/sha256.o	\
	third_party/mbedtls-2.1.2/library/sha512.o	\
	third_party/mbedtls-2.1.2/library/threading.o	\
	third_party/mbedtls-2.1.2/library/timing.o	\
	third_party/mbedtls-2.1.2/library/version.o	\
	third_party/mbedtls-2.1.2/library/version_features.o \
	third_party/mbedtls-2.1.2/library/xtea.o \
  third_party/mbedtls-2.1.2/library/certs.o	\
  third_party/mbedtls-2.1.2/library/pkcs11.o \
  third_party/mbedtls-2.1.2/library/x509.o \
  third_party/mbedtls-2.1.2/library/x509_create.o	\
  third_party/mbedtls-2.1.2/library/x509_crl.o	\
  third_party/mbedtls-2.1.2/library/x509_crt.o	\
  third_party/mbedtls-2.1.2/library/x509_csr.o	\
  third_party/mbedtls-2.1.2/library/x509write_crt.o	\
  third_party/mbedtls-2.1.2/library/x509write_csr.o \
  third_party/mbedtls-2.1.2/library/debug.o \
  third_party/mbedtls-2.1.2/library/net.o \
  third_party/mbedtls-2.1.2/library/ssl_cache.o	\
	third_party/mbedtls-2.1.2/library/ssl_ciphersuites.o \
	third_party/mbedtls-2.1.2/library/ssl_cli.o	\
	third_party/mbedtls-2.1.2/library/ssl_cookie.o \
	third_party/mbedtls-2.1.2/library/ssl_srv.o \
	third_party/mbedtls-2.1.2/library/ssl_ticket.o \
	third_party/mbedtls-2.1.2/library/ssl_tls.o

JSONCPP_DEPS= \
	third_party/jsoncpp/src/lib_json/json_reader.o \
	third_party/jsoncpp/src/lib_json/json_value.o \
	third_party/jsoncpp/src/lib_json/json_writer.o \

HTTP_PARSER_DEPS= \
	third_party/http_parser/http_parser.o

INCLUDES = \
	-Ihttp/ \
	-Iutils/ \
  -Ithird_party/mbedtls-2.1.2/include/ \
  -Ithird_party/http_parser/ \
  -Ithird_party/jsoncpp/src/lib_json/ \
  -Ithird_party/jsoncpp/include/

CXXFLAGS = \
	$(INCLUDES) \
	-g
	
CFLAGS = -fPIC -g $(INCLUDES)

$(STATIC_TARGET): $(DEPS) $(MBEDTLS_DEPS) $(JSONCPP_DEPS) $(HTTP_PARSER_DEPS)
	$(AR) rcs $(STATIC_TARGET) $(DEPS) $(MBEDTLS_DEPS) $(JSONCPP_DEPS) $(HTTP_PARSER_DEPS)


$(TEST_TARGET): $(TEST_DEPS) $(DEPS) $(MBEDTLS_DEPS) $(JSONCPP_DEPS) $(HTTP_PARSER_DEPS) 
	g++ -pthread -lpthread -lstdc++ -o $(TEST_TARGET) $(TEST_DEPS) $(DEPS) $(MBEDTLS_DEPS) $(JSONCPP_DEPS) $(HTTP_PARSER_DEPS)

clean:
	rm -f $(TEST_DEPS) $(DYNAMIC_TARGET) $(STATIC_TARGET) $(DEPS) $(MBEDTLS_DEPS) $(JSONCPP_DEPS) $(HTTP_PARSER_DEPS)

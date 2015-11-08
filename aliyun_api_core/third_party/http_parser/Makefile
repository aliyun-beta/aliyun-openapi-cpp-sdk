TARGET=libhttp_parser.a
DEPS= \
	http_parser.o

INCLUDES= \
	-Isrc/lib_json \
	-Iinclude
	
CXXFLAGS = $(INCLUDES)

$(TARGET):$(DEPS)
	$(AR) rcs $(TARGET) $(DEPS)

clean:
	rm -f $(TARGET) $(DEPS)
TARGET=libjsoncpp.a
DEPS= \
	src/lib_json/json_reader.o \
	src/lib_json/json_value.o \
	src/lib_json/json_writer.o

INCLUDES= \
	-Isrc/lib_json \
	-Iinclude

CXXFLAGS = $(INCLUDES)

$(TARGET):$(DEPS)
	$(AR) rcs $(TARGET) $(DEPS)

clean:
	rm -f $(TARGET) $(DEPS)
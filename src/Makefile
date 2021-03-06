
PROJECT_ROOT = ..
PROJECT_NAME = hphp_runtime

EVAL_DIR=runtime/eval

EXCLUDED_CXX_SOURCES := $(shell echo `find runtime/ext/sep -name "*.cpp"`)
RECURSIVE_SOURCE_SUBDIRS := runtime/base runtime/ext system/gen util $(EVAL_DIR)
REC_SOURCES := $(filter-out $(EXCLUDED_CXX_SOURCES), \
	$(shell find $(RECURSIVE_SOURCE_SUBDIRS) -name "*.cpp" -o -name "*.c"))
CXX_NOOPT_SOURCES := $(filter %.no.cpp, $(REC_SOURCES))

PROGRAMS = test hphp hphpi compiler
SUB_CLEAN_DIRS = idl hphp runtime

C_SOURCES := $(filter-out $(GENERATED_CPP_SOURCES) $(GENERATED_C_SOURCES),\
	$(filter %.c, $(REC_SOURCES)))
CXX_SOURCES := $(filter-out $(GENERATED_CXX_SOURCES) $(CXX_NOOPT_SOURCES),\
	$(filter %.cpp,$(REC_SOURCES)))

include $(PROJECT_ROOT)/src/rules.mk

# embed the git sha1 and branch information
CPPFLAGS += -DCOMPILER_ID=\"$(shell git describe --all --long --abbrev=40 --always)\"

EXCEPTIONS := $(shell find $(EXT_DIR)/mozilla -name "*.a") #$(EXT_DIR)/libfbml/lib/libfbml.a

STATIC_LIBS := $(subst libsicu,libicu,$(filter-out $(EXCEPTIONS), $(ALL_LIBS)))

SHARED_LIBS = $(EXT_DIR)/icu/lib/libicuuc.so \
              $(EXT_DIR)/binutils/libbinutils.so \
              $(shell find $(EXT_DIR)/mozilla -name "*.so") \
              $(patsubst %.a, %.so, $(STATIC_LIBS)) \
              $(LINK_LIBS) \

EXTERNAL += $(SHARED_LIBS)

TARGETS = $(PROGRAMS) $(SHARED_LIB) $(STATIC_LIB)

all: $(TARGETS)

$(PROGRAMS) : $(STATIC_LIB)
hphp: compiler
hphpi : hphp
test: compiler

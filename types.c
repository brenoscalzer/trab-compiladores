
#include "types.h"

static const char *TYPE_STRING[] = {
    "void",
    "char",
    "short",
    "int",
    "long",
    "float",
    "double",
    "signed",
    "unsigned",
    "bool",
    "complex",
    "imaginary",
};

const char* get_text(Type type) {
    return TYPE_STRING[type];
}

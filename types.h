
#ifndef TYPES_H
#define TYPES_H

typedef enum {
    VOID_TYPE,
    CHAR_TYPE,
    SHORT_TYPE,
    INT_TYPE,
    LONG_TYPE,
    FLOAT_TYPE,
    DOUBLE_TYPE,
    SIGNED_TYPE,
    UNSIGNED_TYPE,
    BOOL_TYPE,
    COMPLEX_TYPE,
    IMAGINARY_TYPE
} Type;

const char* get_text(Type type);

#endif // TYPES_H


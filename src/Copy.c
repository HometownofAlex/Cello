#include "Cello.h"

/* TODO */
static const char* Copy_Name(void) {
  return "Copy";
}

/* TODO */
static const char* Copy_Brief(void) {
  return "";
}

/* TODO */
static const char* Copy_Description(void) {
  return "";
}

/* TODO */
static const char* Copy_Examples(void) {
  return "";
}

/* TODO */
static const char* Copy_Methods(void) {
  return "";
}

var Copy = Cello(Copy,
  Instance(Doc,
    Copy_Name, Copy_Brief, Copy_Description, 
    Copy_Examples, Copy_Methods));

var copy(var self) {
  
  if (not implements(self, Copy)) {
    var obj = alloc(type_of(self));
    assign(obj, self);
    return obj;
  } else {
    return method(self, Copy, copy);
  }
}

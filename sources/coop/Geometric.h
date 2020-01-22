#ifndef YPnOLrQT_H
#define YPnOLrQT_H

#define protected_ddUKsuMN_start
#include "Derived.h"
#define protected_lbdtYEkR_start
#include "Another.h"

#define CLASS_DECLARATION YPnOLrQT

#if defined(protected_YPnOLrQT_start) && !defined(protected_YPnOLrQT_stop)

#define CLASS Geometric
#define OBJECT_DESCRIPTOR \
    ATTRIBUTE(public, char *, publicAttribute) \
    ATTRIBUTE(public, int, alternativePublicAttribute) \
    ATTRIBUTE(package, char *, packageAttribute) \
    ATTRIBUTE(package, float, alternativePackageAttribute) \
    ATTRIBUTE(protected, char *, protectedAttribute) \
    ATTRIBUTE(protected, char, alternativeProtectedAttribute) \
    ATTRIBUTE(private, ENCAPSULATED, privateAttribute) \
    ATTRIBUTE(private, ENCAPSULATED, alternativePrivateAttribute)
#define CLASS_DESCRIPTOR \
    METHOD_CD(public_static, void , setClassName, const char *) \
    METHOD_CD(public_static, const char *, getClassName, ...) \
    METHOD_ID(public, void , setPrivateAttribute, char *) \
    METHOD_ID(public, void , setAlternativePrivateAttribute, double) \
    METHOD_ID(public, char *, getPrivateAttribute, ...) \
    METHOD_ID(public, double, getAlternativePrivateAttribute, ...) \
    METHOD_ID(public, void , setProtectedAttribute, char *) \
    METHOD_ID(public, void , setAlternativeProtectedAttribute, char) \
    METHOD_ID(public, char *, getProtectedAttribute, ...) \
    METHOD_ID(public, char, getAlternativeProtectedAttribute, ...) \
    ATTRIBUTE(private_method, ENCAPSULATED, aMethod) \
    ATTRIBUTE(private_static, ENCAPSULATED, className) \
    METHOD_CD_R(package_static, _Derived, void, absCustom, ...) \
    METHOD_CD_R(protected_static, _Derived, void, useCustom, ...) \
    METHOD_CD_R(package_static, _Another, void, absCustom, ...) \
    METHOD_CD_R(protected_static, _Another, void, useCustom, ...)
#include "../objectModel.h"

#define protected_YPnOLrQT_stop
#elif (defined(package_YPnOLrQT_start) && !defined(package_YPnOLrQT_stop)) || (defined(package_vlDzoKUd_start) && !defined(package_vlDzoKUd_stop))

#define CLASS Geometric
#define OBJECT_DESCRIPTOR \
    ATTRIBUTE(public, char *, publicAttribute) \
    ATTRIBUTE(public, int, alternativePublicAttribute) \
    ATTRIBUTE(package, char *, packageAttribute) \
    ATTRIBUTE(package, float, alternativePackageAttribute) \
    ATTRIBUTE(protected, ENCAPSULATED, protectedAttribute) \
    ATTRIBUTE(protected, ENCAPSULATED, alternativeProtectedAttribute) \
    ATTRIBUTE(private, ENCAPSULATED, privateAttribute) \
    ATTRIBUTE(private, ENCAPSULATED, alternativePrivateAttribute)
#define CLASS_DESCRIPTOR \
    METHOD_CD(public_static, void , setClassName, const char *) \
    METHOD_CD(public_static, const char *, getClassName, ...) \
    METHOD_ID(public, void , setPrivateAttribute, char *) \
    METHOD_ID(public, void , setAlternativePrivateAttribute, double) \
    METHOD_ID(public, char *, getPrivateAttribute, ...) \
    METHOD_ID(public, double, getAlternativePrivateAttribute, ...) \
    METHOD_ID(public, void , setProtectedAttribute, char *) \
    METHOD_ID(public, void , setAlternativeProtectedAttribute, char) \
    METHOD_ID(public, char *, getProtectedAttribute, ...) \
    METHOD_ID(public, char, getAlternativeProtectedAttribute, ...) \
    ATTRIBUTE(private_method, ENCAPSULATED, aMethod) \
    ATTRIBUTE(private_static, ENCAPSULATED, className) \
    METHOD_CD_R(package_static, _Derived, void, absCustom, ...) \
    ATTRIBUTE_R(protected_static_method, _Derived, ENCAPSULATED, useCustom) \
    METHOD_CD_R(package_static, _Another, void, absCustom, ...) \
    ATTRIBUTE_R(protected_static_method, _Another, ENCAPSULATED, useCustom)
#include "../objectModel.h"

#define package_YPnOLrQT_stop
#endif

#define CLASS CLASS_DECLARATION
#define OBJECT_DESCRIPTOR \
    ATTRIBUTE(public, char *, publicAttribute) \
    ATTRIBUTE(public, int, alternativePublicAttribute) \
    ATTRIBUTE(package, ENCAPSULATED, packageAttribute) \
    ATTRIBUTE(package, ENCAPSULATED, alternativePackageAttribute) \
    ATTRIBUTE(protected, ENCAPSULATED, protectedAttribute) \
    ATTRIBUTE(protected, ENCAPSULATED, alternativeProtectedAttribute) \
    ATTRIBUTE(private, ENCAPSULATED, privateAttribute) \
    ATTRIBUTE(private, ENCAPSULATED, alternativePrivateAttribute)
#define CLASS_DESCRIPTOR \
    METHOD_CD(public_static, void , setClassName, const char *) \
    METHOD_CD(public_static, const char *, getClassName, ...) \
    METHOD_ID(public, void , setPrivateAttribute, char *) \
    METHOD_ID(public, void , setAlternativePrivateAttribute, double) \
    METHOD_ID(public, char *, getPrivateAttribute, ...) \
    METHOD_ID(public, double, getAlternativePrivateAttribute, ...) \
    METHOD_ID(public, void , setProtectedAttribute, char *) \
    METHOD_ID(public, void , setAlternativeProtectedAttribute, char) \
    METHOD_ID(public, char *, getProtectedAttribute, ...) \
    METHOD_ID(public, char, getAlternativeProtectedAttribute, ...) \
    ATTRIBUTE(private_method, ENCAPSULATED, aMethod) \
    ATTRIBUTE(private_static, ENCAPSULATED, className) \
    ATTRIBUTE_R(package_static_method, _Derived, ENCAPSULATED, absCustom) \
    ATTRIBUTE_R(protected_static_method, _Derived, ENCAPSULATED, useCustom) \
    ATTRIBUTE_R(package_static_method, _Another, ENCAPSULATED, absCustom) \
    ATTRIBUTE_R(protected_static_method, _Another, ENCAPSULATED, useCustom)
#include "../objectModel.h"

struct CLASS_DECLARATION *(CLASS_DECLARATION)(void *);

#define YPnOLrQT(...) _Generic((__VA_ARGS__+0), void * : (YPnOLrQT)(NULL), default : (YPnOLrQT)((void *) 1))

#undef CLASS_DECLARATION

#endif //YPnOLrQT_H

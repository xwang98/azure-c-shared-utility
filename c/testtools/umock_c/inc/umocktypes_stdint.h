// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef UMOCKVALUE_CHARPTR_H
#define UMOCKVALUE_CHARPTR_H

#ifdef __cplusplus
extern "C" {
#endif

    extern int umockvalue_stdint_register_types(void);

    extern char* umockvalue_stringify_int(const int* value);
    extern int umockvalue_are_equal_int(const int* left, const int* right);
    extern int umockvalue_copy_int(int* destination, const int* source);
    extern void umockvalue_free_int(int* value);

#ifdef __cplusplus
}
#endif

#endif /* UMOCKVALUE_CHARPTR_H */
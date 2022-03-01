/**
 * Filename: util/macros.h
 * 
 * Description: useful macros or something
 * 
 * Copyright (c) Gavin Tantleff 2022. All Rights Reserved.
 */

#ifndef UTIL_MACROS_H
#define UTIL_MACROS_H


/**
 * @brief Inserts an element in the first NULL spot in array
 * 
 */
#define util_insertelement(array, length, element) \
    for (int i = 0; i < length; i++) { \
        if (NULL == array[i]) { \
            array[i] = element; \
            return; \
        } \
    }


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* UTIL_MACROS_H */

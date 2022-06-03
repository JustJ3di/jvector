#ifndef JVECTOR
#define JVECTOR
#include <stdio.h>
#include <stdlib.h>


#define jvector(type) type  *

#define get_size(vect)                                              \
    ((vect) ? ((size_t *)v)[-1]:(size_t)0)

#define pop(vect)                                                   \
    do{                                                             \
        size_t *nuovo = realloc(((size_t *)vect-1),                 \
        sizeof(size_t)+sizeof(vect[0])*(*((size_t *)vect-1)));      \
        *nuovo -= 1;                                                \
        vect = (void *)((size_t *)nuovo + 1);                       \
    }while(0)


#define push_back(vect, ele)                                        \
    do                                                              \
    {                                                               \
        if(vect)                                                    \
        {                                                           \
            size_t *nuovo = realloc(((size_t *)vect-1),             \
            sizeof(size_t)+sizeof(ele)*(*((size_t *)vect-1)+1));    \
            if(!nuovo)exit(EXIT_FAILURE);                         \
            *nuovo += 1;                                            \
            vect = (void *)((size_t *)nuovo + 1);                   \
            vect[*((size_t *)nuovo) - 1] = ele;                     \
        }else{                                                      \
            size_t *nuovo = malloc(sizeof(size_t) + sizeof(ele));   \
            if(!nuovo)exit(EXIT_FAILURE);                         \
            *nuovo =1 ;                                             \
            vect = (void *)((size_t *)nuovo+1);                     \
            *vect = ele;                                            \
        }                                                           \
    } while (0);
    

#define delete_vector(vect)                                         \
    free((size_t *)vect-1)


#endif
#include "jvector.h"

int main()
{
    
    jvector(float) v = NULL;


    for (size_t i = 0; i < 100; i++)
    {
        push_back(v, 2*0.1*i);
    }
    

    printf("%f %ld\n", v[11], get_size(v));

    delete_vector(v);

    jvector(char) vect = NULL;

    for (size_t i = 0; i < 1000; i++)
    {
        push_back(vect, 'a');
    }
    
    for (size_t i = 0; i < 230; i++)
    {
        pop(vect);
    }

    printf("%ld\n", get_size(vect));

    delete_vector(vect);
    


    return 0;
}

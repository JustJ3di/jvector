#include "jvector.h"

int main()
{
    
    jvector(float) v = NULL;

    push_back(v, 2.3);
    push_back(v, 2.1441);

    pop(v);
    
    printf("%f %ld\n", v[1], get_size(v));

    delete_vector(v);

    return 0;
}

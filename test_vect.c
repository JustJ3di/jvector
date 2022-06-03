#include "jvector.h"

int main()
{
    
    jvector(float) v = NULL;

    push_back(v, 2.3);
    push_back(v, 2.1441);
    push_back(v,2.31);
    push_back(v,0.231);


    printf("%f %ld\n", v[1], get_size(v));

    delete_vector(v);

    return 0;
}

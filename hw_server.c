#include <rpc/rpc.h>
#include "hw.h"

/* 
   Hello world RPC server -- it just returns the string.
*/

AB *hw_1_svc(AB *ab, struct svc_req *req) {
	struct AB *p;

	printf("getting ready to return value\n");

	int tmp = 0;
	tmp = ab->a;
	ab->a = ab->b;
	ab->b = tmp;

	printf("a=%d\nb=%d\n",ab->a,ab->b);
	p = ab;
	printf("Returning\n");

	return(p);
}

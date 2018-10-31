#include <stdio.h>

#include "new.h"
#include "Object.h"
#include "Set.h"

int main ()
{
	void * s = new (Set);
	void * a = add (s, new(Object));
	void * b = add (s, new(Object));
	void * c = new (Ooject);

	if(contains(s, a) && contains(s, b))	
		puts ("OK");

	if(contains(s, c))	
		puts ("contains?");

	if(differ(a, add(s, a)))
		puts("differ?");

	if(contains(s, drop(s, a)))	
		puts ("drop?");

	delete (drop(s, b));
	delete (drop(s, c));

	return 0;
}


#ifndef SET_H
#define SET_H

extern const void * Set;

void * add (void * set, cont void * element); 
void * find (const void * set, cont void * element); 
void * drop (void * set, cont void * element); 
int    contains (cont void * set, const void * element);

#endif // SET_H

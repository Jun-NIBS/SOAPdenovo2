/*
Copyright 2007, 2008 Daniel Zerbino (zerbino@ebi.ac.uk)

    This file is part of Velvet.

    Velvet is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Velvet is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Velvet; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/
#ifndef _FIBHEAP_H_
#define _FIBHEAP_H_

FibHeap *newFibHeap();

FibHeapNode *insertNodeIntoHeap(FibHeap * heap, Coordinate key,
				unsigned int node);

Coordinate minKeyOfHeap(FibHeap * heap);

Coordinate replaceKeyInHeap(FibHeap * heap, FibHeapNode * node,
			    Coordinate newKey);

void replaceValueInHeap(FibHeapNode * node, unsigned int newValue);

unsigned int removeNextNodeFromHeap(FibHeap * heap);

void *destroyNodeInHeap(FibHeapNode * node, FibHeap * heap);

void destroyHeap(FibHeap * heap);

boolean IsHeapEmpty(FibHeap *heap);
#endif

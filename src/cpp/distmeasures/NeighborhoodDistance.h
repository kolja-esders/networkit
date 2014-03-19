/*
 * NeighborhoodDistance.h
 *
 *  Created on: 24.06.2013
 *      Author: cls
 */

#ifndef NEIGHBORHOODDISTANCE_H_
#define NEIGHBORHOODDISTANCE_H_

#include "NodeDistance.h"
#include <math.h>
#include <algorithm>

/**
 * Assigns a distance value to pairs of nodes according to the
 * overlap of their neighborhoods.
 */
namespace NetworKit {

class NeighborhoodDistance: public NetworKit::NodeDistance {

public:

	NeighborhoodDistance(const Graph& G);

	virtual ~NeighborhoodDistance();

	virtual void preprocess();

	virtual double distance(node u, node v);
};

} /* namespace NetworKit */
#endif /* NEIGHBORHOODDISTANCE_H_ */
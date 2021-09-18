//Nick Waggoner

#ifndef ROOM_CARPET_H_
#define ROOM_CARPET_H_

#include "RoomDimension.h"

class RoomCarpet
{
	private:
		RoomDimension dimension;

		double sqFtPrice;				// The cost per square footage of carpeting 
		double totalCost;				// The total cost of a carpet

	public:
		RoomCarpet(RoomDimension dim, double price = 0.0) : dimension(dim), sqFtPrice(price){
			calcTotalCost();
		}

		void calcTotalCost(){	
			totalCost = (dimension.calcArea()) * sqFtPrice;
		}
		
		double getTotalCost() const {
			return totalCost;
		}
};
#endif
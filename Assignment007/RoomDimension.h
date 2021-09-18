//Nick Waggoner

#ifndef ROOM_DIMENSION_H_
#define ROOM_DIMENSION_H_

#include "FeetInches.h"

class RoomDimension
{
	private:
		FeetInches width;
		FeetInches length;
	
	public:
		RoomDimension() {}

		RoomDimension(FeetInches w, FeetInches l) : width(w), length(l) {}

		FeetInches calcArea() {
			return width.multiply(length);
		}
};
#endif
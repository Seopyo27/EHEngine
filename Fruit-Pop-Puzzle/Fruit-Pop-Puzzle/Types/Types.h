#pragma once
namespace EHEngine
{
	struct POS
	{
		int x = 0;
		int y = 0;

		bool operator!=(const POS& other) const
		{
			return (x != other.x || y != other.y);
		}
	};

	using MousePos = POS;
	using ScreenPos = POS;
}
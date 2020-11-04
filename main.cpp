#include <iostream>
#include <string>
#include <vector>

struct Review
{
	std::string title;
	unsigned int rating;
}

bool operator<(const Review& r1, const Review& r2);
bool WorseThan(const Review& r1, const Review& r2);
bool FillReview(Review& rr);
void ShowReview(const Review& rr);

int main()
{



	return 0;
}

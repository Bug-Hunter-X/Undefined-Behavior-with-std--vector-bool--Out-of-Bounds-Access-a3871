std::vector<bool> vec;
vec.push_back(true);
vec.push_back(false);
bool b = vec[0]; // This works fine
bool c = vec[1]; // This also works fine

// Safe way to access elements:
if(vec.size() > 2)
{
  bool d = vec[2];
}
else
{
  // Handle the case where vec has less than 3 elements.
}

// Alternatively, use at() which will throw an exception if out of bounds:
bool e = vec.at(1); // Safe access, throws exception if out of bounds

// Or better still, use a standard vector for bools, if your usage requires random access:
std::vector<bool> vec2;
vec2.push_back(true);
vec2.push_back(false);
bool f = vec2[0];
bool g = vec2[1];
bool h = vec2.at(2); // This will throw an out_of_range exception
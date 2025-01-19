std::vector<bool> vec;
vec.push_back(true);
vec.push_back(false);
bool b = vec[0]; // This works fine
bool c = vec[1]; // This also works fine
bool d = vec[2]; // This will likely result in undefined behavior.  Accessing beyond vector bounds.
#include <cassert>
#include <stdexcept>

// TODO: Define class Pyramid
class Pyramid{
// public class members
    public:
// constructor
        Pyramid(int length, int width, int height)
        {
            Height(height);
            Length(length);
            Width(width);
        }
// accessors
        int Height() const {return height;}
        int Length() const {return length;}
        int Width() const {return width;}
// mutators
        void Height(int h)
        {
            if(h > -1)
                height = h;
            else
               throw "Invalid height.  "; 
        }
        void Length(int l)
        {
            if(l > -1)
                length = l;
            else
                throw "Invalid length.  ";
        }
        void Width(int w)
        {
            if(w > -1)
                width = w;
            else
                throw "Invalid width.  ";
        }
// public Volume() function
        float Volume() const {return ((length * width * height) / 3.0);}
// private class members
    private:
        int height {0};
        int length {0};
        int width {0};
};
// Test
int main() {
  Pyramid pyramid(4, 5, 6);
  assert(pyramid.Length() == 4);
  assert(pyramid.Width() == 5);
  assert(pyramid.Height() == 6);
  assert(pyramid.Volume() == 40);

  bool caught{false};
  try {
    Pyramid invalid(-1, 2, 3);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}

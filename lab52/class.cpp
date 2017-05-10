class Shape {
   private:
      float width_;
   public:
      void setWidth(float width){ width_ = width; }
      float getWidth() { return width_; }
      float area() { return width_;}
};

class Rectangle : public Shape {
   private:
      float height_;
   public:
      void setHeight(float height) { height_ = height; }
      float getHeight() { return height_; }
      float area() { return height_ * getWidth(); }
      float perimeter() { return height*2 + getwidth()*2; }
};

class Circle : public Shape {
    public:
       float area() { return 3.14 * getWidth()*getWidth(); }
       float circumference() { return 2 * 3.14 * getWidth(); }
};
class Wektor2D
{
private:
    double x;
    double y;
public:
    Wektor2D(double a = 0, double b = 0)
    {
        x = a;
        y = b;
    }

    void setX(double new_x) {
        x = new_x;
    }

    double getX() const {
        return x;
    }

    void setY(double new_y) {
        y = new_y;
    }

    double getY() const {
        return y;
    }

    Wektor2D operator+(const Wektor2D& other) const {
        Wektor2D result(x + other.getX(), y + other.getY());
        return result;
    }

    double operator*(const Wektor2D& other) const {
        return x * other.x + y * other.y;
    }

};     // Tutaj napisz implementacje klasy Wektor2D

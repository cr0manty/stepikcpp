struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-() const;
    Rational operator+() const;
    
    Rational operator+(const Rational & _r) const {
        Rational r(this->numerator_, this->denominator_);
        r.add(_r);
        return r;
    }
    Rational operator+(int i) const {
        Rational r(this->numerator_, this->denominator_);
        r.add(Rational(i));
        return r;
    }
    friend Rational operator+(int i, const Rational & _r) {
        return _r + i;
    }
    Rational operator-(const Rational & _r) const {
        Rational r(this->numerator_, this->denominator_);
        r.sub(_r);
        return r;
    }
    friend Rational operator-(int i, const Rational & _r) {
        return -(_r - i);
    }
    Rational operator*(const Rational & _r) const {
        Rational r(this->numerator_, this->denominator_);
        r.mul(_r);
        return r;
    }
    Rational operator*(int i) const {
        Rational r(this->numerator_, this->denominator_);
        r.mul(Rational(i));
        return r;
    }
    friend Rational operator*(int i, const Rational & _r) {
        return _r * i;
    }
    Rational operator/(const Rational & _r) const {
        Rational r(this->numerator_, this->denominator_);
        r.div(_r);
        return r;
    }
    Rational operator/(int i) const {
        Rational r(this->numerator_, this->denominator_);
        r.div(Rational(i));
        return r;
    }
    friend Rational operator/(int i, const Rational & _r) {
        return Rational(i)/_r;
    }
    
private:
    int numerator_;
    unsigned denominator_;
};
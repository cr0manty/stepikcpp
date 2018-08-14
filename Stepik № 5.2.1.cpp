struct Rational
{
	Rational(int numerator = 0, int denominator = 1);

	void add(Rational rational);
	void sub(Rational rational);
	void mul(Rational rational);
	void div(Rational rational);
	Rational &operator+=(Rational _r)
	{
		this->add(_r);
		return *this;
	}
	Rational &operator-=(Rational _r)
	{
		this->sub(_r);
		return *this;
	}
	Rational &operator*=(Rational _r)
	{
		this->mul(_r);
		return *this;
	}
	Rational &operator/=(Rational _r)
	{
		this->div(_r);
		return *this;
	}

	Rational operator + () const
	{
		return Rational(numerator_, denominator_);
	}
	Rational operator - () const 
	{
		return Rational(-numerator_, denominator_);
	}
	void neg();
	void inv();
	double to_double() const;

private:
	int numerator_;
	int denominator_;
};
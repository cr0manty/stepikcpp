struct Expression
{
    virtual double evaluate() const = 0;
    virtual ~Expression() {};
};

struct Number : Expression
{
    Number(double value) : value(value) {}
    ~Number() {};
    double evaluate() {return value;}
    virtual double evaluate() const {return value;}
    
private:
    double value;
};
struct BinaryOperation : Expression
{
  
    BinaryOperation(Expression const * left, char op, Expression const * right)
        : left(left), op(op), right(right)
    { }
    ~BinaryOperation() {
        delete left;
        delete right;   
    }

    virtual double evaluate() const {
        
        if (op == '+')
            return (left->evaluate() + right->evaluate());
        if (op == '-')
            return (left->evaluate() - right->evaluate());
        if (op == '*')
            return (left->evaluate() * right->evaluate());
        if (op == '/')
            return (left->evaluate() / right->evaluate());
    }

private:
    Expression const * left;
    Expression const * right;
    char op;
};
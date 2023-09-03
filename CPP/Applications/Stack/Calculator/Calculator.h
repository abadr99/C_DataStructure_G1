#ifndef _CALCULATOR_
#define _CALCULATOR_

using namespace std; 
class Calculator
{

public:

    bool EvaluateInfix(string _Exression[] ,uint32_t Size  , float &pResult);

private:
    bool  IsNumber(string _Number);
    bool  IsOperator(string _operator); 
    float Evaluate(float Num1 ,float Num2  , string _operator); 
    bool  priority (string oprator); 
    float RevesePolishNotation(string _Exression[],uint32_t Size);
    bool  GetPostFix(string _Exression[]  , string _PostExression[]  , uint32_t Size  ,uint32_t &NewSize ) ;
};


#endif /* _CALCULATOR_ */
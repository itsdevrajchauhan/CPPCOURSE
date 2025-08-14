BankDeposit::BankDeposit(int p, int y, int r)
{
     principal = p;

     years = y;
     interestRate = float(r) / 100;

     returnValue = principal;
     for (int i = 0; i < y; i++)
     {
          returnValue = returnValue * (1 + interestRate);
     }
};
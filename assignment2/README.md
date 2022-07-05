created a smart contract #META_COIN in SOLIDITY language

So there is a smart contract called MetaCoin, which implements a basic token which the accounts can give to each other with the 'sendCoin' function, and see their balance with the 'getBalance' function.

There will be an Owner of the Loan contract, and he will have an initial balane of 100K MetaCoins, as in the constructor of the MetaCoin class.

He would store the debt he is in to each creditor in a mapping called loans.

I have implemented the following functions along with a constructor and modifier:
1. getCompoundInterest : allows anyone to use it to calculate the amount of interest for given values of P, R, T (in years).                                                                                          
2. reqLoan: anyone should be able to use it to request the Owner to settle his loan. The P, R, T entered is used to calculate the dues, and is added to a mapping. It would emit the Request event.                                                                                                                                                                       
3. getOwnerBalance: anyone can use it to get the amount of MetaCoins owned by the owner. make use of MetaCoin contract's getBalance to implement this, to get a taste of inheritance!. 
4.  viewDues : only the owner can access this to view the amount of loan he owes to the input address, which is stored in the loans mapping. Be sure to make use of the modifier!.                                                                                                                                                                         
5.  settleDues: only the owner can use this to settle the amount of loan he owes to the input address, use MetaCoin's sendCoin function to settle these dues, with appropriate checks for the return values from sendCoin. Also remember to set the amount owed to 0 or whatever remains if sendCoin runs succesfully!                                                                                                                                                                                                                                                                                                                                                                               





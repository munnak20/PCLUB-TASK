Created a smart contract #META_COIN in SOLIDITY language

So there is a smart contract called MetaCoin, which implements a basic token that the accounts can give each other with the 'sendCoin' function and see their balance with the 'getBalance' function.

There will be an Owner of the Loan contract, and he will have an initial balance of 100K MetaCoins, as in the constructor of the MetaCoin class.

I have implemented the following functions along with a constructor and modifier:

1. getCompoundInterest: allows anyone to calculate the amount of interest for given values of P, R, and T (in years).  
                                                                                        
2. reqLoan: Anyone can use it to request the Owner to settle his loan. The P, R, and T entered are used to calculate the dues and are added to a mapping. It would emit the Request event.  
                                                                                                                                                                     
3. getOwnerBalance: Anyone can use it to get the amount of MetaCoins owned by the Owner. 

4. viewDues: Only the Owner can access this to view the amount of loan he owes to the input address, which is stored in the loan mapping. 
                                                                                                                                                                        
5. settleDues: Only the Owner can use this to settle the amount of loan he owes to the input address, using MetaCoin's sendCoin function to settle these dues, with appropriate checks for the return values from sendCoin.                                                                                                                                                                                                                                                                                                                                                                             




## PROOF OF WORK

The Proof of Algorithm is used to verify the transaction and create a new block in the blockchain.

Taking string(transactional string) as input and appending an integer value(nonce) to the string.
The hashed value of the resulting string, which comes from the SHA256 function,  should be less than "00000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF".
The resultant value is called the nonce value, and it is a verification value for that transaction.

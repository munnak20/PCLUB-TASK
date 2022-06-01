# included hash library
import hashlib

# take input as a string
string = input()

# initialize nonce value as 0
nonce=0

# using loop until SHA256 str(string input + nonce ) is less than 00000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
while hashlib.sha256((string+ str(nonce)).encode()).hexdigest()>"00000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" :
    # updating nonce  
    nonce=nonce+1

# printing  nonce value which will be minimum 
print(nonce)

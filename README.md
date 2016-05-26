# compileducation

Step 1: Read a source file into two buffers of 4095 characters followed by an EOF
Step 2: Identify an individual token
Step 3: Create a tuple [token-type[,symbol-table-loc]]
	Ex. y = 4 + x	y -> [ID,0]	= -> [ASSIGN]	4 -> [NUM,0]	+ -> [OP,ADD]	x -> [ID,1]
Step 4: Output the token to be interpreted by the next step of the program
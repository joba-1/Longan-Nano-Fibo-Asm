.globl fibo                   # a0 = fibo(a0), caller in ra

fibo:  addi t0,   a0,   0     # n = a0
       addi a0,   zero, 0     # prev = 0
       addi t1,   zero, 1     # curr = 1
loop:  beq  t0,   zero, exit  # if n is 0 then exit
       bltu t1,   a0,   over  # overflow if curr < prev
       add  t2,   a0,   t1    # next = prev + curr
       addi t0,   t0,   -1    # n--
       addi a0,   t1,   0     # prev = curr
       addi t1,   t2,   0     # curr = next
       jal  zero, loop        # small jump to next iteration

over:  addi a0,   zero, -1    # return -1
exit:  jalr zero, ra,   0     # big jump to return to caller

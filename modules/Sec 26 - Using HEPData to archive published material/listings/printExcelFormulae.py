# Excel wasn't looping over the correct numbers when dragging the formulae, so I made a script to print them instead

for i in range(1, 65):
    for j in range(1, 65):
        print "=C"+str(64*(i-1) + j + 1)+"/SQRT(K"+str(i+1)+"*K"+str(j+1)+")"
#!/usr/bin/env python
import os, sys
nargs = len(sys.argv)
stext = sys.argv[1]  #text to replace
rtext = sys.argv[2]  #by which text to replace
input_file = open('toread.txt')  
output_file = open('toreadrewrite.txt', 'w')
for s in input_file:
        output_file.write(s.replace(stext, rtext))
output_file.close()
input_file.close()

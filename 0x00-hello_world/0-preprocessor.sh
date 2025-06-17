#!/bin/bash
# Runs the C preprocessor on the source file (CFILE) & saves output to 'c'
gcc -E "$CFILE" -o c

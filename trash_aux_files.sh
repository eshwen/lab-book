#!/bin/bash

# Remove all auxiliary files created by compiling thesis, including glossary and bibliography files

this_dir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
for file in ${this_dir}/labbook.*; do
    if [[ $file == "${this_dir}/labbook.tex" ]] || [[ $file == "${this_dir}/labbook.pdf" ]]; then
	    continue
    else
	    rm $file
    fi
done

#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'commandCount' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts STRING_ARRAY commands as parameter.
#

import re

def checkCommand(command):
    regex = r"[a-z]{1}[a-z0-9:]*[/][a-z0-9]+[?][a-z]+"
    p = re.compile(regex)
    return bool(p.match(command))

def commandCount(commands):
    # Write your code here
    t = len(commands)

    for i in range (0, t):
        substrings = set()
        command = commands[i].replace("\\", "?")
        for j in range (0, len(command)):
            for k in range (j, len(command)):
                substrings.add(command[j:k+1]);
        
        print(substrings)
        count = 0
        for sub in substrings:
            if checkCommand(sub):
                count = count + 1
        
        print(count)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    commands_count = int(input().strip())

    commands = []

    for _ in range(commands_count):
        commands_item = input()
        commands.append(commands_item)

    result = commandCount(commands)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

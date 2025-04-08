#!/bin/bash
PATH="/opt/homebrew/opt/bison/bin:$PATH"
cmake -S . -B build/Release -DCMAKE_POLICY_VERSION_MINIMUM=3.5
cmake --build build/Release --config Release
cd scripts
./package_mac.sh

#!/bin/bash

cd ../../../
./kamailio -w . -E -f modules/jsonrpc-c/test/test.cfg -m 256 -M 256

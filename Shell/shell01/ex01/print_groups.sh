#!/bin/bash

id $FT_USER -nrG | tr ' ' ',' | tr -d '\n'
